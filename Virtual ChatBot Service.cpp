# This is the basic code for Virtual ChatBot Service

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

#include <iostream>
#include <cstring>
#include <fstream>

void feedback(){            //Function to take feedback from users
    string fb;                                    
    ofstream fe("Feedback.txt", fstream::app);
    cout<<"Enter your Rating for our service please:)"<<endl;
    cout<<"How many stars do you want to give us on the scale of 1 to 5:)"<<endl;
    cout<<"                         * * * * *"<<endl;
    cin>>fb;
    
    if(fb.size()<6){
        cout<<"Your Rating is "<<fb<<", Thank You for giving us your Rating and your Time Sir:)"<<endl;
        fe<<fb<<endl;
    }
    else{
        cout<<"Your Rating is invalid, please give us valid Rating Sir:)"<<endl;
        cout<<endl;
        feedback();
    }
    fe.close();
}

void ChatBot(){
    string dec3="yes";       //Service ChatBot Function
    
    int quarry;
    int pro;
    cout<<"   ***********************************************************************************************************************"<<endl;
    cout<<"                                             Welcome to our App chat facility :)"<<endl;
    cout<<"                                                 I am Friday the AI chat bot :)"<<endl;
    cout<<"                                         How can I help you please enter the quarry :)"<<endl;
    cout<<endl;
    quar();
    
    while(dec3=="yes"){
        cin>>quarry;
        cout<<endl;
    
        if(quarry==1){
            cout<<"What are the problems, you are facing while using this App:("<<endl;
            prob();
            cin>>pro;
            cout<<endl;
        
            if(pro==1){
                cout<<"******************************************************************************************************"<<endl;
                cout<<"Do one thing:)"<<endl;
                cout<<"Close the app and open it again, to avoid this error!"<<endl;
                cout<<"If after restarting the app, it again don't works then wait for sometime maybe our Server is down:("<<endl;
                cout<<"We are very Sorry! for the Inconvenience you faced, while using the app:("<<endl;
                cout<<"Thank You:)"<<endl;
                cout<<"******************************************************************************************************"<<endl;
            }
            else if(pro==2){
                cout<<"***************************************************************************************"<<endl;
                cout<<"Please! make sure that, the informations you have entred in your Profile are correct:)"<<endl;
                cout<<"If informations are correct and still you facing the problem:("<<endl;
                cout<<"Please refresh or restart the app, to avoid this error!"<<endl;
                cout<<"We are very Sorry! for the Inconvenience you faced, while using the app:("<<endl;
                cout<<"Thank You:)"<<endl;
                cout<<"***************************************************************************************"<<endl;
            }
            else if(pro==3){
                cout<<"***************************************************************************"<<endl;
                cout<<"We are very Sorry! for the Inconvenience you faced, while using the app:("<<endl;
                cout<<"You can talk to one of our executive, on our Coustmer Care number:)"<<endl;
                cout<<"They will surely help, you with your problems:)"<<endl;
                cout<<"Thank You:)"<<endl;
                cout<<"***************************************************************************"<<endl;
            }
            else{
                cout<<"Sorry you have pressed wrong key, Please try again:("<<endl;
                cout<<endl;
                ChatBot();
            }
            
            cout<<endl;
            cout<<"May I help you with anything else Sir:)"<<endl;
            cin>>dec3;
            if(dec3=="yes"){
                cout<<endl;
                quar();
            }
            else{}
        }
        else if(quarry==2){
            feedback();
            
            cout<<endl;
            cout<<"May I help you with anything else Sir:)"<<endl;
            cin>>dec3;
            if(dec3=="yes"){
                cout<<endl;
                quar();
            }
            else{}
        }
        else if(quarry==3){
            cout<<"This is our Coustmer Care Number +91 8797376868 or +91 9708777070, you can contact us here:)"<<endl;
            cout<<"You can contact us, from 10.00AM to 5.00PM everyday:)"<<endl;
            cout<<"Thank You:)"<<endl;
            
            cout<<endl;
            cout<<"May I help you with anything else Sir:)"<<endl;
            cin>>dec3;
            if(dec3=="yes"){
                cout<<endl;
                quar();
            }
            else{}
        }
        else if(quarry==4){
            cout<<"We are very Sorry! for the Inconvenience you faced, while using the app:("<<endl;
            cout<<"Thank you for using our app please, share your feedback with us, have a nice day:)"<<endl;
            cout<<"Enjoy your Dating!, Be your own Matchmaker:)"<<endl;
            cout<<"Thank You:)"<<endl;
            break;
        }
        else{
            cout<<"Sorry you have pressed wrong key, Please try again:("<<endl;
            cout<<endl;
            quar();
        }
    }
}

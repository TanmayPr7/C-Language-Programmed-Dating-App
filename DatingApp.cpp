# This is the basic code for Dating App

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;   //Intialization Section

int otp;
string OTP;
int dec1;
int dec2;
int check;
void Match();


///////////////////////////////////////////////////////Functions & Classes//////////////////////////////////////////////

void otpGen(){
    int max=8999;
    srand(time(0));        //Function to Generate OTP
    otp=rand()%max+999;
}


typedef struct BasicInfo{
    string gmail;
    string number;         //Structure to store LogIn Information
    string pass;
}info;


class personal{
    public:
    string name;
    int age;               //Class to Create and Store user's Profile data
    string gender;
    string passion[5];
    
    personal(){}
    
    personal(string n, int a, string g, string p[5]){
        name = n;
        age = a;
        gender = g;
        
        for(int i=0; i<5; i++){
            passion[i] = p[i];
        }
    }
};


void quar(){                //Function to display types of Quarries
    cout<<"Hi:)"<<endl;
    cout<<"Press 1 for (Problem in using App)"<<endl;
    cout<<"      Press 2 for (Feedback)"<<endl;
    cout<<"     Press 3 for (Contact Us)"<<endl;
    cout<<"     Press 4 for (No, Thanks)"<<endl;
}


void prob(){                //Function to display types of problems
    cout<<"Press 1 if, App is not Responding properly:("<<endl;
    cout<<"Press 2 if, Recommendations of profiles is not accurate, according to you:("<<endl;
    cout<<"Press 3 if, You are facing any other types of problem:("<<endl;
}


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


void display(){             //Function to display starting content to user
    cout<<"        *****************************************************Finder***************************************************"<<endl;
    cout<<"                                                   :)Be your own Matchmaker:)"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                      Press 1 to Sign Up:)"<<endl;
    cout<<"                                          Already have an account? Press 2 to Login:)"<<endl;
    cin>>dec1;                                       
}


void Setdisp(){             //Function to display Settings
    cout<<endl;
    cout<<"                                                        Press 5 for Settings"<<endl;
    cout<<"                                                                 or"<<endl;
    cout<<"                                                         Press 0 to Exit app"<<endl;
}


void settings(){            //Function to execute settings
    int set;
    Setdisp();
    
    cin>>set;
        
    if(set==5){
        int dec;
        cout<<"Press 1 to View Profile:)"<<endl;
        cout<<"Press 2 to Logout:)"<<endl;
        cout<<"Press 3 to Contact Us:)"<<endl;
        cin>>dec;
        cout<<endl;
            
        if(dec==1){
            string pro;
            string pasi;
            ifstream In("LogIn.txt");
            ifstream in("Profile.txt");
            ifstream IN("Passion.txt");
                
            getline(In, pro);
            cout<<"Registered Id or Number: "<<pro<<endl;
                
            getline(In, pro);
            cout<<"Password: "<<pro<<endl;
                
            getline(in, pro);
            cout<<"Name: "<<pro<<endl;
            
            getline(in, pro);
            cout<<"Age: "<<pro<<endl;
            
            getline(in, pro);
            cout<<"Gender: "<<pro<<endl;
            cout<<endl;
                
            cout<<"Passions and Hobbies:"<<endl;
                
            for(int i=0; i<5; i++){
                getline(IN, pasi);
                cout<<(i+1)<<".";
                cout<<pasi<<endl;
            }
            cout<<endl;
            settings();   
            IN.close();
            in.close();
            In.close();
        }
        
        else if(dec==2){
            int l;
            cout<<endl;
            cout<<"                                                  Already a user, Press 1 to login:)"<<endl;
            cout<<"                                                         Press 2 to exit app:)"<<endl;
            cin>>l;
            
            if(l==1){
                string Id, Pass;
                string id, pas;
        
                ifstream in("LogIn.txt");
                getline(in, Id);
                getline(in, Pass);
        
                cout<<"Entre your registered Gmail or Phone Number:"<<endl;           
                cin>>id;
                cout<<endl;
        
                cout<<"Entre correct Password:"<<endl;
                cin>>pas;
                cout<<endl;
        
                if((Id==id) && (Pass==pas)){
                    string n;
                    ifstream in("Profile.txt");
                    getline(in, n);
                
                    cout<<"                                                     Welcome Back, "<<n<<endl;
                    in.close();
                    Match();
                }
                else{
                    cout<<"You have entered wrong Id or Password, Please try again later:("<<endl;
                    exit(0);
                }
                in.close();
            }
            else if(l==2){
                cout<<"Thank You! for using our App, have a good day:)"<<endl;
                exit(0);
            }
            else{}
            
            cout<<endl;
            settings();
        }
        
        else if(dec==3){
            ChatBot();
            settings();
        }
        
        else{}
    }
    else if(set==0){
        cout<<"Thank You! for using our App, have a good day:)"<<endl;
        exit(0);
    }
    else{
        cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
        settings();
    }
    
}

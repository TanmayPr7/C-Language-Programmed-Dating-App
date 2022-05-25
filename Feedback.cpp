# This is the basic code to take feedback form user and save it into file 'Feedback.txt'

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
    }
    fe.close();
}

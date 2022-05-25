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

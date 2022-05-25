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

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

# This is the basic code to generate 4-digit OTP number

#include <iostream>
#include <cstdlib>
#include <ctime>

void otpGen(){
    int max=9999;
    srand(time(0));        //Function to Generate OTP
    otp=rand()%max+999;
}

int main(){
    otpGen();
    return 0;
}

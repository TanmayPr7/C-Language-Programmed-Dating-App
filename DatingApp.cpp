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


void Match(){               //Function to make couple matches
    ifstream sh("Profile.txt");
    string showme;
    int view;
    
    string Gp[5] = {"Reading", "Travelling", "Singing", "Painting", "Programming"};
    string Bp[5] = {"Sports", "Workout", "Movies", "Music", "Guitar"};
    
    personal u1("Angel", 24, "Female", Gp);
    personal u2("Archit", 22, "Male", Bp);               
    
    cout<<"                                  Here are some of the perfect matches for you, Check it Out:)"<<endl;
    cout<<endl;
    
    for (int lineno=1; lineno<5; lineno++){
      if(lineno==4){
          getline(sh, showme);
      }
      else{
          getline(sh, showme);
      }
    }
    sh.close();
    
    if(showme=="Male"){
        if(u1.gender=="Male"){
            ifstream pin("Passion.txt");
            string P[5];
            int match;
            
            for(int i=0; i<5; i++){
                getline(pin, P[i]);
            }
            pin.close();
            
            for(int i=0; i<5; i++){
                  
                for(int j=0; j<5; j++){
                      
                    if(P[i]==u1.passion[j]){
                        match++;
                    }
                }
            }
            
            if(match>=2){
                cout<<u1.name<<", Press 1 to View Profile:)"<<endl;
                cin>>view;
                cout<<endl;
                
                if(view==1){
                    int dec;
                    cout<<"Name: "<<u1.name<<endl;
                    cout<<"Age: "<<u1.age<<endl;
                    cout<<"Gender: "<<u1.gender<<endl;
                    cout<<endl;
                    cout<<"Passions and Hobbies:"<<endl;
                    
                    for(int i=0; i<5; i++){
                        cout<<(i+1)<<".";
                        cout<<u1.passion[i]<<endl;
                    }
                    
                    cout<<endl;
                    cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                    cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                    cin>>dec;
                    
                    if(dec==1){
                        cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                        settings();
                    }
                    else if(dec==2){
                        Match();
                    }
                    else{
                        cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                        cout<<endl;
                        Match();
                    }
                }
                else{}
            }
            else{
                cout<<"There is no perfect match for you, make sure to Optimize your Profile properly:)"<<endl;
            }
        }
        else if(u2.gender=="Male"){
            ifstream pin("Passion.txt");
            string P[5];
            int match;
            
            for(int i=0; i<5; i++){
                getline(pin, P[i]);
            }
            pin.close();
            
            for(int i=0; i<5; i++){
                  
                for(int j=0; j<5; j++){
                      
                    if(P[i]==u2.passion[j]){
                        match++;
                    }
                }
            }
            
            if(match>=2){
                cout<<u2.name<<", Press 1 to View Profile:)"<<endl;
                cin>>view;
                cout<<endl;
                
                if(view==1){
                    int dec;
                    cout<<"Name: "<<u2.name<<endl;
                    cout<<"Age: "<<u2.age<<endl;
                    cout<<"Gender: "<<u2.gender<<endl;
                    cout<<endl;
                    cout<<"Passions and Hobbies:"<<endl;
                    
                    for(int i=0; i<5; i++){
                        cout<<(i+1)<<".";
                        cout<<u2.passion[i]<<endl;
                    }
                    
                    cout<<endl;
                    cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                    cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                    cin>>dec;
                    
                    if(dec==1){
                        cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                        settings();
                    }
                    else if(dec==2){
                        Match();
                    }
                    else{
                        cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                        cout<<endl;
                        Match();
                    }
                }
                else{}
            }
            else{
                cout<<"There is no perfect match for you, make sure to Optimize your Profile properly:)"<<endl;
            }
        }
    }
    else if(showme=="Female"){
        if(u1.gender=="Female"){
            ifstream pin("Passion.txt");
            string P[5];
            int match;
            
            for(int i=0; i<5; i++){
                getline(pin, P[i]);
            }
            pin.close();
            
            for(int i=0; i<5; i++){
                  
                for(int j=0; j<5; j++){
                      
                    if(P[i]==u1.passion[j]){
                        match++;
                    }
                }
            }
            
            if(match>=2){
                cout<<u1.name<<", Press 1 to View Profile:)"<<endl;
                cin>>view;
                cout<<endl;
                
                if(view==1){
                    int dec;
                    cout<<"Name: "<<u1.name<<endl;
                    cout<<"Age: "<<u1.age<<endl;
                    cout<<"Gender: "<<u1.gender<<endl;
                    cout<<endl;
                    cout<<"Passions and Hobbies:"<<endl;
                    
                    for(int i=0; i<5; i++){
                        cout<<(i+1)<<".";
                        cout<<u1.passion[i]<<endl;
                    }
                    
                    cout<<endl;
                    cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                    cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                    cin>>dec;
                    
                    if(dec==1){
                        cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                        settings();
                    }
                    else if(dec==2){
                        Match();
                    }
                    else{
                        cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                        cout<<endl;
                        Match();
                    }
                }
                else{}
            }
            else{
                cout<<"There is no perfect match for you, make sure to Optimize your Profile properly:)"<<endl;
            }
        }
        else if(u2.gender=="Female"){
            ifstream pin("Passion.txt");
            string P[5];
            int match;
            
            for(int i=0; i<5; i++){
                getline(pin, P[i]);
            }
            pin.close();
            
            for(int i=0; i<5; i++){
                  
                for(int j=0; j<5; j++){
                      
                    if(P[i]==u2.passion[j]){
                        match++;
                    }
                }
            }
            
            if(match>=2){
                cout<<u2.name<<", Press 1 to View Profile:)"<<endl;
                cin>>view;
                cout<<endl;
                
                if(view==1){
                    int dec;
                    cout<<"Name: "<<u2.name<<endl;
                    cout<<"Age: "<<u2.age<<endl;
                    cout<<"Gender: "<<u2.gender<<endl;
                    cout<<endl;
                    cout<<"Passions and Hobbies:"<<endl;
                    
                    for(int i=0; i<5; i++){
                        cout<<(i+1)<<".";
                        cout<<u2.passion[i]<<endl;
                    }
                    
                    cout<<endl;
                    cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                    cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                    cin>>dec;
                    
                    if(dec==1){
                        cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                        settings();
                    }
                    else if(dec==2){
                        Match();
                    }
                    else{
                        cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                        cout<<endl;
                        Match();
                    }
                }
                else{}
            }
            else{
                cout<<"There is no perfect match for you, make sure to Optimize your Profile properly:)"<<endl;
            }
        }
    }
    else if(showme=="Everyone"){
        ifstream pin("Passion.txt");
        string P[5];
        int match;
            
        for(int i=0; i<5; i++){
            getline(pin, P[i]);
        }
        pin.close();
        
        for(int i=0; i<5; i++){
                  
            for(int j=0; j<5; j++){
                      
                if(P[i]==u1.passion[j]){
                    match++;
                }
            }
        }
        
        if(match>=2){
            cout<<u1.name<<", Press 1 to View Profile:)"<<endl;
        }
        else{}
        
        int matc;
        
        for(int i=0; i<5; i++){
                  
            for(int j=0; j<5; j++){
                      
                if(P[i]==u2.passion[j]){
                    matc++;
                }
            }
        }
        
        if(matc>=2){
            cout<<u2.name<<", Press 2 to View Profile:)"<<endl;
        }
        else{}
        
        if((match<2) && (matc<2)){
            cout<<"There is no perfect match for you, make sure to Optimize your Profile properly:)"<<endl;
        }
        
        else{
            cin>>view;
            cout<<endl;
        
            if(view==1){
                int dec;
                cout<<"Name: "<<u1.name<<endl;
                cout<<"Age: "<<u1.age<<endl;
                cout<<"Gender: "<<u1.gender<<endl;
                cout<<endl;
                cout<<"Passions and Hobbies:"<<endl;
                    
                for(int i=0; i<5; i++){
                    cout<<(i+1)<<".";
                    cout<<u1.passion[i]<<endl;
                }
                
                cout<<endl;
                cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                cin>>dec;
                
                if(dec==1){
                    cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                    settings();
                }
                else if(dec==2){
                    Match();
                }
                else{
                    cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                    cout<<endl;
                    Match();
                }
            }
            else if(view==2){
                int dec;
                cout<<"Name: "<<u2.name<<endl;
                cout<<"Age: "<<u2.age<<endl;
                cout<<"Gender: "<<u2.gender<<endl;
                cout<<endl;
                cout<<"Passions and Hobbies:"<<endl;
                    
                for(int i=0; i<5; i++){
                    cout<<(i+1)<<".";
                    cout<<u2.passion[i]<<endl;
                }
                
                cout<<endl;
                cout<<"                                               Press 1 to swipe  Right this profile:)"<<endl;
                cout<<"                                                Press 2 to swipe Left this profile:)"<<endl;
                cin>>dec;
                
                if(dec==1){
                    cout<<"Congrats! You have done your job, now wait for otherside's response:)"<<endl;
                    settings();
                }
                else if(dec==2){
                    Match();
                }
                else{
                    cout<<"Sorry you have pressed wrong key, please try again:("<<endl;
                    cout<<endl;
                    Match();
                }
            }
            else{}
        }
    }
    else{}
}


void PersonalInfo(){     //Function to take & store data to, class object(user)
  int showme;
  personal user;
  ofstream Out("Profile.txt");              
  ofstream OUT("Others.txt");
  ofstream O("Passion.txt");

  cout<<"Entre your name:"<<endl;
  cin>>user.name;
  cout<<endl;
  
  Out<<user.name;
  Out<<endl;

  cout<<"Entre your age:" << endl;
  cin>>user.age;
  cout<<endl;
  Out<<user.age;
  Out<<endl;

  if((user.age<18) || (user.age>40)){
      cout <<"Sorry according to our age policy, you are not eligible to use Finder:("<<endl;
      exit (0);
  }
  
  else{
      cout<<"Entre your gender:"<<endl;
      cin>>user.gender;
      cout<<endl;
      Out<<user.gender;
      Out<<endl;

      cout<<"Whom you want to date?"<<endl;
      cout<<"Press 1 for Men:)"<<endl;
      cout<<"Press 2 for Women:)"<<endl;
      cout<<"Press 3 for Everyone:)"<<endl;
      cin>>showme;
      
      if(showme>3){
          cout<<"Sorry you have pressed wrong key, Please try again:("<<endl;
          cin>>showme;
          
          if(showme>3){
              cout<<"Sorry you have pressed wrong key, Error:("<<endl;
              exit(0);
          }
          
          else{}
      }
      
      else{}
      
      if(showme==1){
          Out<<"Male";
          Out<<endl;
      }
      
      else if(showme==2){
          Out<<"Female";
          Out<<endl;
      }
      
      else{
          Out<<"Everyone";
          Out<<endl;
      }
      
      cout<<endl;
      cout<<"                                                    Hey, You are almost there:)"<<endl;
	  cout<<endl;
      cout<<"Add atleast five of your Passions or Hobbies to complete your Profile:)"<<endl;
      cout<<"=>";
      Out<<endl;
      
      for(int i=0;i<5;i++){
          cin>>user.passion[i];
          O<<user.passion[i];
          O<<endl;
      }
	  
	  check++;
	  OUT<<check;
	  OUT<<endl;
	  
	  cout<<endl;
	  cout<<"                                  Congratulations! You have successfully created your account:)"<<endl;
	  cout<<"                                                   Now, be your own Matchmaker"<<endl;
	  cout<<endl;
	  cout<<endl;
	  OUT.close();
	  O.close();
	  Out.close();
	  
	  Match();
    }
}



//////////////////////////////////////////////////////Main Code////////////////////////////////////////////////////////


int main(){
    int otp4;
    info user;
    string o;
    ifstream IN("Others.txt");
    getline(IN, o);
    IN.close();
    
    if(o=="1"){
        cout<<"                                             Welcome Back!, Be your own Matchmaker:)"<<endl;
        Match();
    }
    
    else{
    display();                                                  //Main Code
    if(dec1==1){
        cout<<endl;
        cout<<"                                                 Press 1 to Sign Up with Gmail:)"<<endl;
        cout<<"                                              Press 2 to Sign Up with Phone Number:)"<<endl;
        cin>>dec2;
        ofstream out("LogIn.txt");
        string num;
        
        if(dec2==1){
	        cout<<"Entre your Gmail:"<<endl;
	        cin>>user.gmail;
	        cout<<endl;
	        out<<user.gmail;
	        out<<endl;
	        
	        cout<<"Create a Strong Password:"<<endl;
	        cin>>user.pass;
	        cout<<endl;                                              //Sign Up Code
	        out<<user.pass;
	        out<<endl;
	        
	        cout<<"We have sent you a 4-digit verification code on this gmail: "<<user.gmail<<" ,please fill it below:"<<endl;
	        otpGen();
	        OTP = to_string(otp);
	        
	        if(OTP.size()>4){
	            cout<<"Error!"<<endl;
	            otpGen();
	            
	        }
	        else{}
	        
	        cout<<otp<<endl;
	        cin>>otp4;


	        if(otp4==otp){
	            cout<<"                                                       Welcome To Finder:)"<<endl;
	            cout<<endl;
	            cout<<"                                                         Create Account:)"<<endl;
	            cout<<"                                                  Make your Profile Intresting:)"<<endl;
	            PersonalInfo ();
	        }

	        else{
	            cout<<"The code you entered is invalid, Please try again:(" <<endl;
	            cin>>otp4;

	            if(otp4==otp){
		            cout<<"                                                       Welcome To Finder:)"<<endl;
		            cout<<endl;
		            cout<<"                                                         Create Account:)"<<endl;
		            cout<<"                                                  Make your Profile Intresting:)"<<endl;
		            PersonalInfo();
		        }

	            else{
		            cout<<"The code you entered is invalid, Please try again later:("<<endl;
		        }

	        }

	    }
        else if (dec2 == 2){
            
	        cout<<"Entre your Phone Number:"<<endl;
	        cin>>user.number;
	        cout<<endl;
	        num=user.number;
	  
	        if(num.size()>10){
	            cout<<"You have enterd an invalid Phone number! Please try again:("<<endl;
	            cin>>user.number;
	            cout<<endl;
	            num=user.number;
	      
	            if(num.size()>10){
	                cout<<"You have enterd an invalid Phone number! Please try again later:("<<endl;
	                exit(0);
	            }
	      
	            else{}
	        }
	  
	        else{}
	        
	        out<<user.number;
	        out<<endl;
	        
	        cout<<"Create a Strong Password:"<<endl;
	        cin>>user.pass;
	        cout<<endl;
	        out<<user.pass;
	        out<<endl;
	        out.close();
	        
	        cout<<"We have sent you a 4-digit verification code on this number: "<<user.number<<" ,please fill it below:"<<endl;
	        otpGen();
	        OTP = to_string(otp);
	        
	        if(OTP.size()>4){
	            otpGen();
	            
	        }
	        else{}
	        
	        cout<<otp<<endl;
	        cin>>otp4;

	        if(otp4==otp){
	            
	            cout<<"                                                       Welcome To Finder:)"<<endl;
	            cout<<endl;
	            cout<<"                                                         Create Account:)"<<endl;
	            cout<<"                                                  Make your Profile Intresting:)"<<endl;
	            PersonalInfo();
	        }
	        
	        else{
	            cout<<"The code you entered is invalid, Please try again:("<<endl;
	            cin>>otp4;

	            if(otp4==otp){
		            cout<<"                                                       Welcome To Finder:)"<<endl;
		            cout<<endl;
		            cout<<"                                                         Create Account:)"<<endl;
		            cout<<"                                                  Make your Profile Intresting:)"<<endl;
		            PersonalInfo();
		        }

	            else{
		            cout<<"The code you entered is invalid, Please try again later:("<<endl;
		        }

	        }

	    }

        else{
	        cout<<"Sorry you have pressed wrong key, Error:("<<endl;
	    }

    }
    
    else if(dec1==2){
        string Check;
        ifstream IN("Others.txt");
        getline(IN, Check);
        IN.close();
        
        if(Check=="1"){
            string Id, Pass;
            string id, pas;
        
            ifstream in("LogIn.txt");
            getline(in, Id);
            getline(in, Pass);
        
            cout<<"Entre your registered Gmail or Phone Number:"<<endl;           //Login Code
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
        
        else{
            cout<<"You don't have any account, please first Register or Sign Up:("<<endl;
            exit(0);
        }
        
    }
    
    else{
        cout<<"Sorry you have pressed wrong key, Error:("<<endl;
    }
    }
    return 0;
}



//For Login and Signup 

#include<iostream>            //  }
#include<fstream>             //  } Libraries
#include<string>              //  } Used
#include<stdio.h>             //  }   

using namespace std;
   
  bool blust = true;
  
//********************
//  Signup Function  *
//********************

  void registerme() {           
    string name;
    string pwd;
      ofstream myfile("User.txt", ios::out | ios::app);
            cout << " Enter Username: ";
            cin>>name;
            cout << " Enter User Password: ";
            cin>>pwd;
        myfile<<endl<<name<<endl<<pwd;
      myfile.close();
            cout << " :) Successfully Registered :) " << endl;
    }

//********************
//  Login Function   *
//********************

void login(){
  string name,pwd;
  int pass=0,pass1=0;
          cout << " Enter Username: ";
          cin>>name;
          cout << " Enter User Password: ";
          cin>>pwd;
      ifstream myfile("User.txt");
      if (myfile.is_open())
  {     while (!myfile.eof())
      {        signed int pos;
               string line;
               getline(myfile,line); 
               pos=line.find(name); 
      if(pos!=string::npos) 
          {     pass=1;
                 break;
          }
      }
  }
 if (myfile.is_open())
      {  while (!myfile.eof())
        {
               signed int pos;
               string line;
               getline(myfile,line); 
               pos=line.find(pwd); 
            if(pos!=string::npos) 
           { pass1=1;
             break;
           }
         }
     myfile.close();
      }

if(pass==1 && pass1==1)
  {
          cout<<" :) login successful :) "<<endl;
        blust=false;
  }
else
          cout<<"Login Unsuccessful";
}

//********************
//     Mainmenu      *
//********************

void mainmenu()
{   int choice;
    bool counter=true;
      while(counter==true)
  {
          cout<<"Main Menu:"<<endl;
          cout<<"01:Login"<<endl;
          cout<<"02:Register"<<endl;
          cout<<"03:Exit"<<endl;
        cout<<"Enter your choice from 1 to 3"<<endl;
        cin>>choice;
  switch(choice)
    {     
  case 1:
           login();
            if(blust==false)
              { counter=false;}                   // Switch Statement
            break;
  case 2:
           registerme();
            break;
  case 3:
            counter=false;
            break;
  default:
          cout<<"Enter a valid choice";
            break;
    }
  }
}
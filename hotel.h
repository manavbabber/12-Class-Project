#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<iomanip>						//--->   Libraries Used
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;
using namespace sql;

	int size;
	string fi[1000];

int connector(string str2)
{
			cout << endl;
	try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;
  driver = get_driver_instance();
  con = driver->connect("tcp://127.0.0.1:3306", "root", "snappy");
  con->setSchema("mainmenu");
  stmt = con->createStatement();
  res = stmt->executeQuery(str2);
  cout<<endl;
  while (res->next()) { 
    for(int i=1;i<6;++i){
    cout <<setw(18)<<left<< res->getString(i)<<"\t" ;
   }
   cout<<endl;
  }
  cout<<endl;
  delete res;
  delete stmt;
  delete con;} 
	catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line "
     << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;}
			cout << endl;
	return EXIT_SUCCESS;
}

int connector2(string str2)
{
			cout << endl;
	try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;
  driver = get_driver_instance();
  con = driver->connect("tcp://127.0.0.1:3306", "root", "snappy");
  con->setSchema("mainmenu");
  stmt = con->createStatement();
  res = stmt->executeQuery(str2);
  cout<<endl;
  while (res->next()) { 
  	ofstream mefile("cart.txt", ios::out | ios::app);
  for(int i=1;i<6;++i){
    cout <<setw(18)<<left<< res->getString(i)<<"\t" ;
    mefile<<res->getString(i)<<"\t"<<endl;
   }
   cout<<endl;
   mefile.close();
  }
  cout<<endl;
  delete res;
  delete stmt;
  delete con;} 
	catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line "
     << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;}
			cout << endl;
	return EXIT_SUCCESS;
}

void reading()
{ 
			cout<<"Enter the total number of items you want to order"<<endl;
			cin>>size;
for(int i=0;i<size;i++){
	cout<<"Enter the item id you want to order:"<<endl;
	cin>>fi[i];}
}

void display()
{
	for(int i=0;i<size;i++)
		{
			cout<<fi[i];
		}
}

//********************
// Function of cart  *
//********************
void cart()
{		int ch;
			cout<<"You are in your cart"<<endl<<"The Items in your cart are:"<<endl;
    char get;
    ifstream mefile;
    mefile.open("cart.txt",ios::out | ios::app);
    if(!mefile){
			cout<<"Cannot open file"<<endl;}
	while(mefile){
	mefile.get(get);
	cout<<get;}
	mefile.close();
			cout<<"To confirm the order press 1 otherwise press 2 for cancellation:"<<endl;
			cin>>ch;
	if(ch==1) cout<<" :) Your ordered is successfully placed :)"<<endl;
	else  exit(1);
}


//*******************************
// Function to go to your cart  *
//*******************************
void back()
{
		int choice5;
			cout<<"If you Want to go back then press 1 otherwise press 2 to go to your cart"<<endl;
			cin>>choice5;
	if (choice5==1)
 {
		int choice2;
			cout<<"Restaurants Available:"<<endl;
			cout<<"01-The Avenue"<<endl;
			cout<<"02-Konjiki Ramen"<<endl;  
			cout<<"03-Tocador Cappilary"<<endl;
		   cout<<"Enter your choice like(1,2,3) to select the restaurant"<<endl;
		   cin>>choice2;
		string str;
  switch(choice2)
   {
	case 1: 
				str= "select * from avenue";
		connector(str);
		reading();
	for (int i = 0; i < size; ++i)
	{	
				str="SELECT * FROM avenue WHERE itemid=\'"+fi[i]+"\'";
		connector(str);
	}
			cout<<" :)	Your Items are In Your Cart!!    :) "<<endl;
		back();
		break;
	case 2: 
				str="select * from konjikiramen";
		connector(str);
		reading(); 
	for (int i = 0; i < size; ++i)
	{ 
				str="SELECT * FROM konjikiramen WHERE itemid=\'"+fi[i]+"\'"; 
		connector(str);
	}
			cout<<" :)	Your Items are In Your Cart!!    :) "<<endl;
		back();
		break;
case 3:
				str="select * from tocadorcapillary";
		connector(str);
		reading();
	for (int i = 0; i < size; ++i)
	{              
				str="SELECT * FROM tocadorcapillary WHERE itemid=\'"+fi[i]+"\'";
		connector2(str);
	}
			cout<<" :)	Your Item are In Your Cart!!    :) "<<endl;
		back();
		break;
   }
 }
	else cart();
}			

//***************************************
// Function to select the type of Drone *
//***************************************

void drone()
{
	 int choice4;
		cout<<"Drones Available:"<<endl;
		cout<<"01-Multi-Rotor"<<" "<<"(Speed 20km/hr)"<<endl;
		cout<<"02-Single-Rotor Helicopter"<<" "<<"(Speed 25km/hr)"<<endl;  
		cout<<"03-Fixed-Wing Hybrid VTOL"<<" "<<"(Speed 10km/hr)"<<endl;
		cout<<"04-Fixed-Wing"<<" "<<"(Speed 15km/hr)"<<endl;
	   cout<<"Enter your choice like(1,2,3,4) to select the restaurant"<<endl;
	   cin>>choice4;
switch(choice4)
 {
case 1:cout<<"Great!!! You Will received it in about 1 an hour"<<endl; 
	   break;
case 2:cout<<"Great!!! You Will received it in about 45 minutes"<<endl; 
	   break;
case 3:cout<<"Great!!! You Will received it in about 1 hour and 45 minutes"<<endl; 
	   break;
case 4:cout<<"Great!!! You Will received it in about 1 hour and 25 minutes"<<endl; 
	   break;
 }
}

//*******************************************
//	Function to show the mainmenu of hotels *
//*******************************************

void Show()	
{
	int choice2;
		cout<<"Restaurants Available:"<<endl;
		cout<<"01-The Avenue"<<endl;
		cout<<"02-Konjiki Ramen"<<endl;  
		cout<<"03-Tocador Cappilary"<<endl;
		cout<<"Enter your choice like(1,2,3) to select the restaurant"<<endl;
		cin>>choice2;
	string str;
  switch(choice2)
    {
  case 1: 
				str= "select * from avenue";
		    connector(str);
	 	    reading();
		for (int i = 0; i < size; ++i)
	{			str="SELECT * FROM avenue WHERE itemid=\'"+fi[i]+"\'";
			connector(str);
	}
		cout<<" :)	Your Items are In Your Cart!!    :) "<<endl;
			back();
		break;
  case 2: 
				str="select * from konjikiramen";
			connector(str);
			reading(); 
		for (int i = 0; i < size; ++i)
	  { 
				str="SELECT * FROM konjikiramen WHERE itemid=\'"+fi[i]+"\'"; 
			connector(str);}
		cout<<" :)	Your Items are In Your Cart!!    :) "<<endl;
			back();
		break;
  case 3:
				str="select * from tocadorcapillary";
			connector(str);
			reading();
		for (int i = 0; i < size; ++i)
		{              
				str="SELECT * FROM tocadorcapillary WHERE itemid=\'"+fi[i]+"\'";
			connector2(str);
		}
		cout<<" :)	Your Item are In Your Cart!!    :) "<<endl;
			back();
		break;
	}
}
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std ;
bool login();
void studentMenu();

struct Student {

string id;
string password;
string name;
int year;
char attendence [6][100];
};

void main()
{

	ifstream in ("in.txt");// Declaring the Input File
	ofstream out ("out.txt");//Declaring the Output File 
}

void studentMenu()//student main menu function 
{
Student s;
int option;


cout<<" *****************************************************"<<endl;
cout<<" -----------ATTENDANCE MANAGEMENT SYSTEM--------------"<<endl;
cout<<" * [ ==STUDENT MENU== ] *"<<endl;
cout<<" * *"<<endl;
cout<<" * [1] LOG IN *"<<endl;
cout<<" * [2] REGISTER(FOR NEW STUDENT) *"<<endl;
cout<<" * [3] MAIN MENU *"<<endl;
cout<<" * [4] EXIT *"<<endl;
cout<<" * *"<<endl;
cout<<" *****************************************************"<<endl;
cout<<" Enter a selection : ";
cin>>option;

switch(option)
{
case 1:
login();
break;

}
}
bool login()//the login function
{
    char ch; 
    char correct[]="admin";
 
 
//cout<<"*"; 
int trials=1;
bool verified=true;
do
{
    cout<<"Enter a password : ";
    verified=true;
    ch = getch();
    int i=0;
    while(ch!='\n')      //continue reading till you reach Enter
    {
        cout<<"*";
         if(ch!=correct[i++])        //if a space is met, a new word is counted
              verified=false;
         ch = getch();
      
           
    }
     if(i<5) //to make sure that the user entered all the PW characters
     verified=false;
if(!verified) 
         cout<<"\n Wrong password!"<<endl;
    else
        cout<<"\nLogin successfully "<<endl;
    trials++;
 
    }while(!verified && trials<=3);
    return verified;
}




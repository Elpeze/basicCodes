#include<iostream>
#include<fstream>
#include<string.h>  
using namespace std;
void login();
void registration();
void forgot();



int main(){

int c;

cout<<"                    Welcome to the registration system  --"<<endl;
cout<<"               MENU             "<<endl;
cout<<endl;
cout<<"\t |Pres 1 to LOGIN     |"<<endl;
cout<<"\t |Pres 2 to REGISTER  |"<<endl;
cout<<"\t |Pres 3 if  FORGOT   |"<<endl;
cout<<"\t |Pres 4 to EXIT      |"<<endl;

cin>>c;
cout<<endl;
switch (c)
{
case  1:
    login();
    break;
case  2:
    registration();
    break;
case  3:
    forgot();
    break;
 case  4:
cout<< "*** Thank you ****"<<endl;
 break;
default:
   system("cls");
   cout<<" Please select option that given above"<<endl;
   main();
}



    return 0;
}

void login()
{
    int count;
    string userId, password, id , pass;
    system("cls");
    cout<< " Please username and password"<<endl;
    cout<<" Username: ";
    cin>>userId;
    cout<<" password: ";
    cin>>password;
    ifstream input ("records.txt");
    while (input>>id>>pass)
    {
        if(userId==id && password==pass)
        {
            count=1;
            system("cls");
            cout<< " "

        }
 }
 input.close();
 if(count==1){
     cout<<userId<<" Login is succesfull"<<endl;
     main();

 }
 else{
     cout<<" Login error , please check your username"<<endl;
     main();
 }



}
void registration(){

string ruserId, rpassword, rid, rpass;
system("cls");
cout<<" Enter the username"<<endl;
cin>>ruserId;
cout<<" Enter the password"<<endl;
cin>>rpassword;
ofstream f1("records.txt", ios::app);
f1<<ruserId<<" "<<rpassword<<endl;
system("cls");
 cout<<" Registration is succesfull"<<endl;



}

void forgot(){
    int option;
    system("cls");
    cout<< " Dont worry everybody forgot "<<endl;
    cout<<" Press 1 to search you id by username "<<endl;
    cout<<" press 2 to go back the main menu "<<endl;
    cout<<"\t\t\t enter your choice"<<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        int count=1;
        string suserId, sId,spass;
        cout<<"Enter the username that you remember "<<endl;
        cin>>suserId;
        ifstream f2("records.txt");
        while (f2>>sId>>spass)
        {
            if(sid==suserId){
                count=1;
            }
          
        }
        f2.close();
        if(count=1){
            cout<<" Your account is found "<<endl;
            cout<< " Your password is: "<< spass<<endl;
            main();
        }
        else{
            cout<<" sorry we cant find "<<endl;
            main();
        }
        
        break;

        case 2:
        main();
    
    default:
    cout<< " Wrong choice  ü try again"<<endl;
        break;
    }


}
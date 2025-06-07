#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

int main()
{
    const string correct_login = "kamil";
    const string correct_passwords = "synowiec"; 
    string user_login;
    string user_password;
    cout<<"Prosze podaj login: "<<endl;
    cin>>user_login;
    
    
    while(user_login != "kamil")
    {
        cout<<"   "<<endl;
        cout<<"Bledny login, wprowadz jeszcze raz"<<endl;
        cout<<"Prosze podaj login: "<<endl;
        cin>>user_login;
    }

    cout<<"   Prosze podaj haslo: "<<endl;
    cin>>user_password;

    while(user_password != "synowiec")
    {
        cout<<"Bledne haslo!"<<endl;
        cout<<"   Prosze podaj haslo: "<<endl;
        cin>>user_password;
            
    }
        
        
    if(user_login == "kamil" && user_password == "synowiec") 
    {
        cout<<"Dane pawridlowe, zapraszam! "<<endl;
    }  

    
}


#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    int a, b;
    cout<<"Podaj a: "<<endl;
    cin>>a;
    cout<<endl;
    cout<<"Podaj b "<<endl;
    cin>>b;
    cout<<endl;
    if( a > 0 )
    {
        if(b>0)
            cout<<"Przechodzi przez I II i III";
        else if(b<0)
            cout<<"Przechodzi przez I III i IV";
        else 
            cout<<"Przechodzi przez I III";
    }
    else if (a<0)
    {
        if(b>0)
            cout<<"Przechodzi przez I II i IV";
        else if(b<0)
            cout<<"Przechodzi przez II III i IV";
        else 
            cout<<"Przechodzi przez II IV";
    }
    else
    {
        if(b>0)
            cout<<"Przechodzi przez I II";
        else if(b<0)
            cout<<"Przechodzi przez  III i IV";
        else 
            cout<<"Pkrywa się z osią ox";
    }
    return 0;
}
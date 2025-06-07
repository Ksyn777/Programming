#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    int day;
    cout<<"Jaki dzien tygodnia chcesz sprawdzi?"<<endl;
    cin>>day;
    switch (day)
    {
        case 1:
            cout<<"PONIEDZIALEK"<<endl;
            break;
        case 2:
            cout<<"WTOREK"<<endl;
            break;
        case 3:
            cout<<"SRODA"<<endl;
            break;
        case 4:
            cout<<"CZWARTEK"<<endl;
            break;
        case 5:
            cout<<"PIATEK"<<endl;
            break;
        case 6:
            cout<<"SOBOTA"<<endl;
            break;
        case 7:
            cout<<"NIEDZIELAK"<<endl;
            break;
        default:
            cout<<"Podano wartosc spoza zakresu"<<endl;
            break;
            
    }
    return 0;

}
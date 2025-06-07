#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    const int n = 5;
    int i = 1;
    int liczba;
    int parzyste = 0;
    int nieparzyste = 0;
    for(i = 1; i <= n; i++)
    {
        cout<<"Podaj liczbe: "<<endl;
        cin>>liczba;
        if (liczba % 2 == 0)
        {
            parzyste++;
            cout<<liczba<<endl;
        }
        else
        {
            nieparzyste++;
            cout<<liczba<<endl;
        }
    }
    cout<<"Ilosc liczb parzystych: "<<parzyste;
    cout<<"Ilosc liczb nieparzystych: "<<nieparzyste;
    return 0;





}
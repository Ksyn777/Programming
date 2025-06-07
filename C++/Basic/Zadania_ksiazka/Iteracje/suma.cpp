#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    double x;
    double suma = 0;
    int ilosc_liczb = 0;
    while (suma <= 100)
    {
        ilosc_liczb++;
        cout<<"Podaj liczbe: ";
        cin>>x;
        suma += x;
        
    }
    cout<<"Ilosc liczb: "<<ilosc_liczb<<endl;
    cout<<"Suma liczb: "<<suma;
    return 0;



}
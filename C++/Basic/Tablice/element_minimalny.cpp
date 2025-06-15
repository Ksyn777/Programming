#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
    int ilosc_liczb;
    
    int podana_liczba;
    cout<<"Ile liczb ma posiadać Twoja lista?: "<<endl;
    cin>>ilosc_liczb;
    cout<<endl;
    int* tablica = new int[ilosc_liczb];
    for(int i = 0; i < ilosc_liczb; i++)
    {
        
        cout<<"Podaj liczbe: "<<endl;
        cin>>podana_liczba;
        cout<<endl;
        tablica[i] = podana_liczba;

    }

    int minimum = tablica[0];
    for(int i = 0; i < ilosc_liczb; i++ )
    {
        
        if(tablica[i] < minimum)
        {
            minimum = tablica[i];
        }
            
    }

    int maksimum = tablica[0];
    for(int i = 0; i < ilosc_liczb; i++)
    {
        if(tablica[i] > maksimum)
        {
            maksimum = tablica[i];
        }
    }


    for(int i = 0; i < ilosc_liczb; i ++)
    {
        cout<<tablica[i]<<" ";
    }

    cout<<"Minimalna liczba to: "<<minimum<<endl;
    cout<<"Maksymalna liczba to: "<<maksimum<<endl;



    

}
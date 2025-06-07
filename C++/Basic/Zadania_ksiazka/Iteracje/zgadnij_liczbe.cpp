#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

int main()
{
    int liczba_wylosowana;
    int liczba_wybrana;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(1,100);
    liczba_wylosowana = dist(gen);
    

    while(liczba_wybrana != liczba_wylosowana)
    {
        int liczba_losowan;
        cout<<"Program losuje liczbe, twoim zadaniem jest odgadnać. Liczba jest w zakresie 1 - 100"<<endl;
        cout<<"Podaj liczbe!: ";
        cin>>liczba_wybrana;
        if(liczba_wybrana == liczba_wylosowana)
        {
            cout<<"Gratuluje! Zgadles! Wylosowana liczba to:  "<<liczba_wylosowana<<endl;
            return 0;

        }
        else
        {
            cout<<  "Liczba : "<<liczba_wylosowana<<endl;
            cout<<"Bledna liczba, ponow probe"<<endl;
            liczba_losowan += 1;
            cout<<"Liczba Twoich dotychczasowych prob:  "<<liczba_losowan<<endl;
            if(liczba_wybrana > liczba_losowan)
                cout<<"Podana liczba jest za duza.."<<endl;
            else
                cout<<"Podana liczba jest za mala";

        }

    
    }
    return 0;
    
    
}
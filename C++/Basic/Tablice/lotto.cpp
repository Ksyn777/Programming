#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

const int nliczb = 6;
const int ilosc_liczb = 49;


int main()
{
    
    
    int wylosowane_liczby[nliczb];
    
    
    //Losowanie liczb
    int liczba_wylosowana;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(1,ilosc_liczb);
    
    int i = 0;
    for(int i = 0; i < nliczb;)
    {
        liczba_wylosowana = dist(gen);
        wylosowane_liczby[i] = liczba_wylosowana;
    
        //Sprawdzenie liczb
        bool powtarza_sie = false;
        for(int j = 0; j < i; j++)
        {
            if(wylosowane_liczby[j] == wylosowane_liczby[i])
            {
                powtarza_sie = true;
                break;
            }
        }
        if(!powtarza_sie) ++i;
    }
    cout<<"Wynik losowania: "<<endl;
    for(int i = 0; i < nliczb; i++)
    {
        cout<<wylosowane_liczby[i]<<" ";
    }
}

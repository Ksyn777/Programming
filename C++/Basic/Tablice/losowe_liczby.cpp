#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
    int suma;
    int srednia;
    int liczba_wylosowana;
    int lista_wylosowanych[100];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(1,1000);
    

    for(int i = 0; i <= 100; i++)
    {
        liczba_wylosowana = dist(gen);
        lista_wylosowanych[i] = liczba_wylosowana;

        bool powtarza_sie = false;
        for(int j = 0; j <= i; j++)
        {
            if(lista_wylosowanych[j] == lista_wylosowanych[i])
                powtarza_sie == true;
                break;
            if(!powtarza_sie)
                i++;
        }
    }

    cout<<"Liczby wylosowane "<<endl;
    for(int i = 0; i <= 100 - 1; i++)
    {
        cout<<lista_wylosowanych[i]<<" ";
    }
    for(int i = 0; i <= 100-1; i++)
    {
        
        suma += lista_wylosowanych[i];
        
    }
    cout<<"Suma wszytskich elementow: "<<suma;
    cout<<endl;
    srednia = suma / 100;
    cout<<"Srednia elementow wynosi: "<<srednia;

}
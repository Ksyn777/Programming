#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
    double a;
    double b;
    int dzialanie;
    string koniec;
    double wynik;
    
    cout<<"Witaj w kalkulatorze "<<endl;
    do 
    {
        cout<<"Podaj pierwsza liczbe "<<endl;
        cin>>a;
        cout<<endl;
        cout<<"Podaj druga licze: "<<endl;
        cin>>b;
        cout<<endl;
        cout<<"Wybierz dzialanie: "<<endl;
        cout<<"1. Dodawanie "<<endl;
        cout<<"2. Odejmowanie "<<endl;
        cout<<"3. Dzielenie "<<endl;
        cout<<"4. Mnozenie "<<endl;
        cout<<"5. Potegowanie "<<endl;
        cout<<"6. Pierwiastkowanie "<<endl;
        cout<<"7. Logarytmy"<<endl;
        cout<<"8. Funkcje trygonometryczne"<<endl;
        
        if(dzialanie == 1)
        {
            wynik = a + b;
            cout<<"Wynik dodawania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }
        else if(dzialanie == 2)
        {
            wynik = a - b;
            cout<<"Wynik odejmowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 3)
        {
            wynik = a / b;
            cout<<"Wynik dzielenia: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 4)
        {
            wynik = a * b;
            cout<<"Wynik mnozenia: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 5)
        {
            wynik = pow(a, b);
            cout<<"Wynik Potegowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 6)
        {
            wynik = sqrt(a);
            cout<<"Wynik Pierwiastkowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 7)
        {
            wynik = log(a);
            cout<<"Wynik Logarytmu: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else
        {   
            string kat;
            cout<<"Jaki kat chcesz wyliczyc ?: "<<endl;
            cin>>kat;
            cout<<endl;

            if(kat == "sinus")
            {
                wynik = sin(a);
                cout<<"Wynik Sinusa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }
            else if(kat == "cosinus")
            {
                wynik = cos(a);
                cout<<"Wynik Cosinusa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }
            else if(kat == "tanges")
            {
                wynik = tan(a);
                cout<<"Wynik Tangesa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }

           
        }


    
    }while(koniec != "nie");
    

    





}
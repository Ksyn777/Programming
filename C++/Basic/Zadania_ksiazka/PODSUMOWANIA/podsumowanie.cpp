#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

void rok_przestepny()
{
    int user_years;
    const int four_year = 4;
    const int hundred_year = 100;
    string answer;
    double przestepny_rok;

    while(answer != "no")
    {
        cout<<"Podaj rok ktory chcesz sprawdzic: "<<endl;
        cin>>user_years;
        if (cin.fail()) {
            cout << "Niepoprawna liczba! Spróbuj jeszcze raz." << endl;
            cin.clear();            // czyści błędy
            cin.ignore(1000, '\n'); // usuwa błędny ciąg
        }
        else 
        {
            if(user_years % 4 == 0 && user_years % 100 != 0 || user_years % 400 == 0)
            {
                cout<<user_years<<" - Podany rok  jest przestepny. "<<endl;
            
            }
            else
            {
                cout<<user_years<<" - Podany rok nie jest przestepny"<<endl;
            
            }
        }
        cout<<"Czy chcesz  sprawdzac dalej ? "<<endl;
        cin>>answer;
    
    }
   


}

void parzyste()
{
    
    int i = 1;
    int liczba;
    int ilosc_powtorzen = 1; 
    int parzyste = 0;
    int nieparzyste =0 ;
    
    cout<<"Witaj w grze parzyste/nieparzyste"<<endl;
    cout<<"Ile liczb chcesz wprowadzic ?: "<<endl;
    cin>>ilosc_powtorzen;
    if(ilosc_powtorzen < 1)
    {
        cout<<"Ilosc powtorzen musi byc wieksza niz 0 "<<endl;
        cout<<endl;
        
    }
    else 
    {
        for(i = 1; i <= ilosc_powtorzen; i++)
        {   
            cout<<"Wprowadz liczbe ktora chcesz sprawdzic"<<endl;
            cin>>liczba;
            cout<<endl;
            if(liczba % 2 == 0)
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
        
    }
    cout<<"Ilosc liczb parzystych: "<<parzyste;
    cout<<"Ilosc liczb nieparzystych: "<<nieparzyste;
    


}

void kalkulator()
{
    double a;
    double b;
    int dzialanie;
    string koniec;
    double wynik;
    
    cout<<"Witaj w kalkulatorze "<<endl;
    do 
    {
        
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
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Podaj druga licze: "<<endl;
            cin>>b;
            cout<<endl;
            wynik = a + b;
            cout<<"Wynik dodawania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }
        else if(dzialanie == 2)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Podaj druga licze: "<<endl;
            cin>>b;
            cout<<endl;
            wynik = a - b;
            cout<<"Wynik odejmowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 3)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Podaj druga licze: "<<endl;
            cin>>b;
            cout<<endl;
            wynik = a / b;
            cout<<"Wynik dzielenia: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 4)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Podaj druga licze: "<<endl;
            cin>>b;
            cout<<endl;
            wynik = a * b;
            cout<<"Wynik mnozenia: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 5)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Podaj druga licze: "<<endl;
            cin>>b;
            cout<<endl;
            wynik = pow(a, b);
            cout<<"Wynik Potegowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 6)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
            wynik = sqrt(a);
            cout<<"Wynik Pierwiastkowania: "<<wynik<<endl;
            cout<<"Czy chcesz kontynowac ?:"<<endl;
            cin>>koniec;
        }

        else if(dzialanie == 7)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>a;
            cout<<endl;
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
                cout<<"Podaj pierwsza liczbe "<<endl;
                cin>>a;
                cout<<endl;
                wynik = sin(a);
                cout<<"Wynik Sinusa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }
            else if(kat == "cosinus")
            {
                cout<<"Podaj pierwsza liczbe "<<endl;
                cin>>a;
                cout<<endl;
                wynik = cos(a);
                cout<<"Wynik Cosinusa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }
            else if(kat == "tanges")
            {
                cout<<"Podaj pierwsza liczbe "<<endl;
                cin>>a;
                cout<<endl;
                wynik = tan(a);
                cout<<"Wynik Tangesa: "<<wynik<<endl;
                cout<<"Czy chcesz kontynowac ?:"<<endl;
                cin>>koniec;
            }

           
        }


    
    }while(koniec != "nie");
    

    





}

void zgadnij_liczbe()
{
    int liczba_wylosowana;
    int liczba_wybrana;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(1,100);
    liczba_wylosowana = dist(gen);
    

    while(liczba_wybrana != liczba_wylosowana)
    {
        int liczba_losowan = 0;
        cout<<"Program losuje liczbe, twoim zadaniem jest odgadnać. Liczba jest w zakresie 1 - 100"<<endl;
        cout<<"Podaj liczbe!: ";
        cin>>liczba_wybrana;
        if(liczba_wybrana == liczba_wylosowana)
        {
            cout<<"Gratuluje! Zgadles! Wylosowana liczba to:  "<<liczba_wylosowana<<endl;
            

        }
        else
        {
            cout<<  "Liczba : "<<liczba_wylosowana<<endl;
            cout<<"Bledna liczba, ponow probe"<<endl;
            liczba_losowan += 1;
            cout<<"Liczba Twoich dotychczasowych prob:  "<<liczba_losowan<<endl;
            if(liczba_wybrana > liczba_wylosowana)
                cout<<"Podana liczba jest za duza.."<<endl;
            else
                cout<<"Podana liczba jest za mala";

        }

    
    }
    
    
    
}

bool logowanie()
{
    int ilosc_zlych = 0;
    const string correct_login = "kamil";
    const string correct_password = "synowiec"; 
    string user_login;
    string user_password;

    cout << "Prosze podaj login: ";
    cin >> user_login;

    while (user_login != correct_login)
    {
        ilosc_zlych++;
        if (ilosc_zlych >= 5)
        {
            cout << "Przekroczyles limit prob logowania.\n";
            return false;
        }

        cout << "Bledny login, sprobuj ponownie: ";
        cin >> user_login;
    }

    ilosc_zlych = 0;  // reset dla hasla

    cout << "Prosze podaj haslo: ";
    cin >> user_password;

    while (user_password != correct_password)
    {
        ilosc_zlych++;
        if (ilosc_zlych >= 5)
        {
            cout << "Przekroczyles limit prob hasla.\n";
            return false;
        }

        cout << "Bledne haslo, sprobuj ponownie: ";
        cin >> user_password;
    }

    cout << "Dane prawidlowe. Witamy!\n";
    return true;
}


void menu()
{
    int wybor_menu;
    do {
        cout << "Witaj w Menu, co chcialbys dzisiaj porobic?" << endl;
        cout << "1. Zgadnij liczbe" << endl;
        cout << "2. Kalkulator" << endl;
        cout << "3. Rok przestepny" << endl;
        cout << "4. Liczby parzyste i nieparzyste" << endl;
        cout << "Wcisnij odpowiednia cyfre aby wybrac funkcje: ";
        cin >> wybor_menu;

        if(wybor_menu < 1 || wybor_menu > 4)
            cout << "Niepoprawny wybor. Sprobuj ponownie.\n\n";

    } while(wybor_menu < 1 || wybor_menu > 4);
   
    switch(wybor_menu)
    {
        case 1:
            cout << "Przekierowanie do zgadnij liczbe" << endl;
            zgadnij_liczbe();
            break;
        case 2:
            cout << "Przekierowanie do kalkulatora" << endl;
            kalkulator();
            break;
        case 3:
            cout << "Przekierowanie do lat przestepnych" << endl;
            rok_przestepny();
            break;
        case 4:
            cout << "Przekierowanie do parzystych i nieparzystych" << endl;
            parzyste();
            break;
    }

    

}

int main()
{
    cout<<"Witaj, aby dolaczyc i zaczac zabawe najperw musisz sie zalogowac"<<endl;
    if (!logowanie()) {
    return 1; // kończy program, jeśli błędne logowanie
    }
    cout<<"Swietnie, dane sa prawidlowe, mozemy zaczynac."<<endl;
    menu();
    return 0;

}
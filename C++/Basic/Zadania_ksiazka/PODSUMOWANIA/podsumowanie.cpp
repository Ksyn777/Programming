#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

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
            break;
        case 2:
            cout << "Przekierowanie do kalkulatora" << endl;
            break;
        case 3:
            cout << "Przekierowanie do lat przestepnych" << endl;
            break;
        case 4:
            cout << "Przekierowanie do parzystych i nieparzystych" << endl;
            break;
    }

    

}

int main()
{
    cout<<"Witaj, aby dolaczyc i zaczac zabawe najperw musisz sie zalogowac"<<endl;
    logowanie();
    cout<<"Swietnie, dane sa prawidlowe, mozemy zaczynac."<<endl;
    menu();
    return 0;

}
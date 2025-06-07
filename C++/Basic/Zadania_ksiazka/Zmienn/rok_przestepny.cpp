#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
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
    return 0;


}
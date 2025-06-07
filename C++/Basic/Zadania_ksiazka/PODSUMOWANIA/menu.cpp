#include "std_lib_facilities.h"
#include <iostream>



using namespace std;

int main()
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

    return 0;

}
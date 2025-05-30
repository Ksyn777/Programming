#include "std_lib_facilities.h"

int main() 
{
    string friend_sex = "???";
    string friend_name = "Marek";
    string first_name = "???";
    string answer1 = "???";
    string answer2 = "???";
    int male = 36;
    int women = 12;
    char znak_m = male;
    char znak_k = women;
    int age = 0;
    cout<<"Witaj przyjacielu, jak masz na imie ?\n";
    cin >> first_name;
    cout<<"Witaj "<<first_name<<", Jak Ci mija dzień ? \n";
    cin >> answer1;
    cout << answer1 << "  Wow mi tak samo!\n";
    cout << "Czy widziałes moze " <<friend_name<< " dzisiaj? \n";
    cin >> answer2;
    if (answer2 == "Tak")
        cout << "Ile " <<friend_name<< " ma teraz lat ?\n";
        cin >> age;
        if (age < 12)
            cout << "W przyszlym roku skonczy " <<age+1<<"\n";
        else if (age == 17)
            cout << "W przyszlym roku bedziesz mogl glosowac \n";
        else if (age > 70)
            cout << "Mam nadzieje ze korzystasz z emerytury \n";
        //if (age = 0 or age > 110)
            //simple_error("Żartujesz!");
    else if (answer2 == "Nie")
        cout << " Ajjjj, Szkoda";
    cout << "Jakiej płci jest marek ? Napisz m lub k \n";
        cin >> friend_sex;
    if (friend_sex == "m")
        cout << znak_m;
    else if (friend_sex == "k")
        cout << znak_k;
        

    return 0;    
        





}
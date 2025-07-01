#include <iostream>

using namespace std;

int main()
{
    
    int liczba_uzytkownik; 
    int suma = 0;
    cout<<"Podaj liczbe ktora chcesz sprawdzic: ";
    cin>>liczba_uzytkownik;
    if(liczba_uzytkownik > 100000 && liczba_uzytkownik < 1)
    {
        for(int i = 1; i <= liczba_uzytkownik; i++)
        {
            int sprawdzenie = liczba_uzytkownik % i;
            if(sprawdzenie == 0)
            {
                suma += 1;
            }
        }

        if(suma == 2)
        {
            cout<<"Liczba podana: "<<liczba_uzytkownik<<" jest liczba pierwsza"<<endl;
            cout<<"TAK"<<endl;

        }
        else
        {
            cout<<"Liczba podana: "<<liczba_uzytkownik<<" nie jest liczba  pierwsza"<<endl;
            cout<<"NIE"<<endl;
        }
        return 0;

        }
    else
    {
        cout<<"Liczba musi byc z przedzialu 1 - 100000";
    }
    
    

}
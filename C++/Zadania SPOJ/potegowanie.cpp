#include <iostream>

using namespace std;

int main()
{
    int D;
    cout<<"Ile liczb ?: ";
    cin>>D;
    if(D >=1 && D <= 10)
    {
        for(int i = 1; i <= D; i++)
        {
            int a;
            cout<<"Podaj a:  ";
            cin>>a;
            int b;
            cout<<"Podaj b:  ";
            cin>>b;
            
            int suma = 1;
            for(int j = 1; j <= b; j++)
            {
                suma *= a;
            }
            int dziesiec = suma % 10;
           
            
            cout<<dziesiec;
            
           

        }
    }
     else
    {
        cout << "Liczba D musi byc w zakresie od 1 do 10." << endl;
    }

    return 0;

}
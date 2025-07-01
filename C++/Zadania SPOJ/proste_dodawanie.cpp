#include <iostream>

using namespace std;

int main()
{
    int t;
    int n; 
    int liczba; 
    
    cout<<"Podaj t: ";
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int suma = 0;
        cout<<"Podaj n: ";
        cin>>n;
        for(int j = 1; j <= n; j++)
        {
            cout<<"Podaj liczbe: ";
            cin>>liczba;
            suma += liczba;
        }

        cout<<"suma: "<<suma;
    }
    
    return 0;

    
}
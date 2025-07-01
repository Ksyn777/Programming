#include <iostream>

using namespace std;

int reversArray(int tablica)
{

    int lenght_array = sizeof(tablica) / sizeof(tablica[0]);
    for(int i = (lenght_array - 1); i >= 0; i-- )
    {
        cout<tablica[i]<<" ";
    }

}

int main()
{
    int t;
    int n;
    
    cout<<"Podaj t: ";
    cin>>t;
    cout<<endl;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<endl;
    int tablica[n];
    for(int i = 0; i <= n - 1; i++)
    {   
        
        int liczba;
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        tablica[i] = liczba;

    }
    for(int j = 0; j <= n - 1; j++)
    {   cout<<tablica[j]<<" ";
    
    }
    return 0;
    cout<<" "<<endl;
    cout<<reversArray;





}
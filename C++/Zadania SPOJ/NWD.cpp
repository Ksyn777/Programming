#include<iostream>
using namespace std;

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int main()
{
    int a, b;
    
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    
    cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;
   
    return 0;
}
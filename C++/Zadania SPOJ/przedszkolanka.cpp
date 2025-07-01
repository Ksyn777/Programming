#include <iostream>

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
    int a;
    int b;
    int N;
    cout<<"Podaj N: ";
    cin>>N;
    cout<<" "<<endl;

        for(int i = 1; i <= N; i++)
        {
            cout<<"Podaj a: ";
            cin>>a;
            cout<<" "<<endl;
            cout<<"Podaj b: ";
            cin>>b;
            if(a >= 10 && b <= 30)
            {
                int NWW = (a*b) / NWD(a,b);
                cout<<NWW;
                cout<<""<<endl;
            }
            else
            {
                if(a < 10)
                {
                    cout<<"a jest za duże";
                }
                else if(b > 30)
                {
                    cout<<"b jest za duże";
                }
            }
        }


    
}
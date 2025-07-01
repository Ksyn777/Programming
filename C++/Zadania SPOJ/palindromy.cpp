#include <iostream>

using namespace std;

int reverseDigit(int n, int result = 0) {
    if (n == 0) return result;
    return reverseDigit(n / 10, result * 10 + (n % 10));
}



int main()
{
    int t;
    int n;
    cout<<"Podaj t: ";
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        cout<<"Podaj n: ";
        cin>>n;
        int odwrocona = reverseDigit(n);
        int licznik = 0;
        while(n != odwrocona)
        {
            
            n = n + odwrocona;
            odwrocona = reverseDigit(n);
            licznik++;
            
        
        }
        cout<<n<<" "<<licznik;
        

    }


}
#include "std_lib_facilities.h"
int main()
{
    cout << "Please eneter the floting values: ";
    double n;
    cin >> n;
    cout << "n ==" << n;
    cout <<"\nn+1 ==" << n+1
         <<"\nthree times n =="<< 3*n
        <<"\ntwice n ==" << n+n
        <<"\nn squared" << n*n
        <<"\nhalf of n" << n/2
        <<"\nnsquare root of n =="<< sqrt(n);
    
}
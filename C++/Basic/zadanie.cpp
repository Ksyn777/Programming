#include <iostream>
#include <algorithm>  // potrzebne do sort()
#include "std_lib_facilities.h"

int main() 
{
    
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    cout << "Podaj pierwsza: ";
    cin >> v1;
    cout << "Podaj druga: ";
    cin >> v2;
    cout << "Podaj trzecią: ";
    cin >> v3;
    if (v1 < v2) 
        cout<<v1<<" jest mniejsza\n";
    else 
        cout<<v2<<" jest mniejsza\n";
    int sum = v1 + v2;
    cout<<sum<<" suma \n";
    int mnoz = v1 * v2;
    cout <<mnoz<< " mnozenie\n";
    if (v1 > v2)
        cout<<double(v1 / v2)<<" dzielenie\n";
    else 
        cout<<double(v2 / v1)<<" dzielenie\n";
    
    



}
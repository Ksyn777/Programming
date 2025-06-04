#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main() 
{
    const int ilosc_liczb = 5;
    int i;
    double max, min, liczba, suma = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(0,99);
    min = dist(gen);
    max = min;
    suma += max;
    cout<<min<<endl;
    do 
    {
        i++;
        liczba = dist(gen);
        if(i <= ilosc_liczb)
        {
            cout<<liczba<<", ";
        }
        else
        {
            cout<<liczba<<".";
        }
        if (max < liczba) max = liczba;
        if (min > liczba) min = liczba;
        suma += liczba;

    }
    while(i <= ilosc_liczb -1);
    cout << "Suma: " << suma << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << max << endl;
    return 0;

}
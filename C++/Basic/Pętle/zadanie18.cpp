#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int min, max, liczba, suma = 0;
    const int liczba_losowan = 5;
    int i = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(0,99);
    min = dist(gen);
    max = min;
    suma += max;
    while(i <= liczba_losowan-1)
    {
        i++;
        liczba = dist(gen);
        
        if (max < liczba) max = liczba;
        if (min > liczba) min = liczba;
        suma += liczba;
    
        
    }
    cout << "Suma: " << suma << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << max << endl;
    return 0;


}
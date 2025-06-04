#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;


int main() 
{
    auto x = 0, y = 0;
    cout<<"Program obicz wartosc funkcji y = 3x dla x zmieniajacego sie od 0 do 10   ";
    while (x <= 10 )
    {
        y = 3 * x;
        cout<<"X to: "<< x;
        cout<<"Y to: "<< y;
        cout<<"Wynik to: "<<y;
        x++;
    }
}
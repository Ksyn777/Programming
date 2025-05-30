#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

int main() {

    int x = 0, y = 0;
    cout<<"Program oblicza wartosc funkcji y = 3x dla zmieniajacego sie x";
    

    do
    {
        y = 3*x;
        cout<<"Wynik to: "<<y<<endl;
        x++;
    } while (x <=10);

    return 0;
}
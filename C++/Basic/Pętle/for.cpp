#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

int main() {

    int x, y;
    cout<<"Program oblicza wartosc funkcji y = 3x dla zmieniajacego sie x";
    cout<<"Podaj x: "<<endl;
    cin>>x;
    cout<<"Podaj y; "<<endl;
    cin>>y;
    for (x = 0; x <= 10; x++)
    {
        y = 3*x;
        cout<<"Wynik to: "<<y<<endl;
    }
    

}
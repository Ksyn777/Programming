#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int x = 0;
    int suma = 0;
    do 
    {
        x++;
        suma = suma + x;
    }
    while(x != 100 );
    cout<<"Suma to : "<<suma<<endl;
}
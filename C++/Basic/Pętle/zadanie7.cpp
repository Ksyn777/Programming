#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int x = 1;
    int suma = 0;
    for(x = 1; x <= 100; x++ )
    {
        suma += x;
    }
    cout<<"Suma = "<<suma<<endl;
    return 0;
}

#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>


using namespace std;

int main()
{
    auto x = 1, suma = 0;
    while(x <= 100)
    {
        if (x % 2 != 0)
            suma += x;
        x++;
    }
    cout<<suma<<endl;
    return 0;
}
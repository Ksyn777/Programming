#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>


using namespace std;

int main()
{
    int x;
    auto suma = 0;
    for(x = 1; x <= 100; x++)
    {
        if (x % 2 == 0)
            suma += x;
        

    }
    cout<<suma<<endl;
    return 0;
}
#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    const int n = 10;
    int wiersze, kolumny;
    wiersze = 1;
    while(wiersze <= n)
    {
        kolumny = 1;
        while (kolumny <= n)
        {
            cout<<wiersze*kolumny<<"\t";
            kolumny++;
        }
        wiersze++;
        cout<<endl;
        
        
    }
    return 0;

}

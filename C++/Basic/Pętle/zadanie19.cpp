#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    const int n  = 10;
    int wiersze, kolumny;
    for(wiersze = 1; wiersze <= n; wiersze++)
    {
        for(kolumny = 1; kolumny <= n; kolumny++)
        {
            cout<<wiersze*kolumny<<"\t";
        }
        cout<<endl;

    }
    return 0;


}
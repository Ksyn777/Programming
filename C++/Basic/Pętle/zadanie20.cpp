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
    do 
    {   
        kolumny = 1;
        do
        {
            cout<<wiersze*kolumny<<"\t";
            kolumny++;
            


        } while(kolumny <= n);
        wiersze++;
        cout<<endl;
        
    } while(wiersze <= n);
    return 0;
}
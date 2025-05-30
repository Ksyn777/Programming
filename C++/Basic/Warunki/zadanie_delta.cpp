#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>


using namespace std;
int main() {

    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;
    int liczba_pierwiastkow = 0;
    cout << fixed << setprecision(2) << endl;
    cout<< "Podaj a: " << endl;
    cin >> a;
    if  (a == 0)
    {
        while (a == 0 && a < 0)
        {
            cout << "Nieprawidłowa wartość";
            cout<< "Podaj a: " << endl;
            cin >> a;
        }
    }
    else {

        cout<< "Podaj b: " << endl;
        cin >> b;
        cout<< "Podaj c: " << endl;
        cin >> c;
        cout << fixed << setprecision(3) << endl;
        //int liczba_pierwiastkow = 0;
        double delta = (b*b) - (4*a*c);
        if (delta < 0)
            liczba_pierwiastkow = 0;
        else if (delta == 0)
            liczba_pierwiastkow = 1;
        else 
            liczba_pierwiastkow = 2;
        switch (liczba_pierwiastkow)
        {
            case 0 : {
                cout<<"Brak rozwiazan";
                break;
            }
            case 1 : {
                double wynik = -b/(2*a);
                cout << "X0 = " << wynik;
                }    break;
            case 2 : {
                double x1 = (-b - sqrt(delta)) / (2 *a);
                double x2 = (-b + sqrt(delta)) / (2*a);
                cout<<"  X1 = "<<x1<<endl;
                cout<<"  X2 = "<<x2<<endl;
                break;
            }
            
        }
        
        
        
    }   return 0;
}
    



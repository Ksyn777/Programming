#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <conio.h>
#include <math.h>
#include <random>



using namespace std;

int main()
{
    const int ilosc_liczb = 5;
    int i;
    double max, min, suma = 0;
    double liczba;
    random_device rd; //Służy do inicjalizacji generatora liczb pseudolosowych
    mt19937 gen(rd());  //to silnik losujący uwórz generator gen, zainicjalizowany ziarnem z rd().
    uniform_int_distribution<>dist(0,99); //Losuje liczby z równym prawdopodobieństwem
    min = dist(gen); //Tutaj losujesz liczbę całkowitą z rozkładu
    max = min; //Przypisujesz wartość min do max Na tym etapie: min == max == 42.
    suma += max; //Czyli suma = suma + max.
    for (i = 1; i <= ilosc_liczb - 1; i++)
    {
        liczba = dist(gen);
        if(i <= ilosc_liczb-2)
        {
            cout<<liczba<<", ";
        }
        else 
        {
            cout<<liczba<<".";

        }
        if (max < liczba) max = liczba;
        if (liczba < min) min = liczba;
        suma += liczba;
        

    }
    cout << "Suma: " << suma << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << max << endl;
    return 0;

}
#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{

    const int N = 25;
    int* tablica = new int[N];
    int wylosowana_liczba;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(-25,25);
    for(int i = 0; i < N; i++ )
    {
        wylosowana_liczba = dist(gen);

        bool powtarza = false;
        for(int j = 0; j < i; j++)
        {
            if(tablica[j] == wylosowana_liczba)
            {
                powtarza = true;
                break;
            }
        }

        if(powtarza)
        {
            i--; // Cofamy krok, aby powtórzyć ten sam indeks i
            continue;
        }
        else
        {
            tablica[i] = wylosowana_liczba;
        }
    }


    

      // Kopiowanie tablic
    int tablica_minimum[N];
    int tablica_maksimum[N];
    copy(tablica, tablica + N, tablica_minimum);
    copy(tablica, tablica + N, tablica_maksimum);

    // Sortowanie
    sort(tablica_minimum, tablica_minimum + N);
    sort(tablica_maksimum, tablica_maksimum + N, greater<int>());

    // Wyświetlanie
    cout << "Tablica oryginalna:\n";
    for (int i = 0; i < N; i++) cout << tablica[i] << " ";
    cout << "\n\nTablica posortowana rosnąco:\n";
    for (int i = 0; i < N; i++) cout << tablica_minimum[i] << " ";
    cout << "\n\nTablica posortowana malejąco:\n";
    for (int i = 0; i < N; i++) cout << tablica_maksimum[i] << " ";
    cout << endl;

    delete[] tablica;
    return 0;

}
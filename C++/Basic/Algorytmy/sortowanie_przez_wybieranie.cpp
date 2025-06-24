#include "std_lib_facilities.h"
#include <vector>
#include <iostream>

// Funkcja znajduje indeks najmniejszego elementu w wektorze
int findSmallestIndex(const vector<int>& lista)
{
    int smallest_index = 0;
    for (int i = 1; i < lista.size(); i++)
    {
        if (lista[i] < lista[smallest_index])
        {
            smallest_index = i;
        }
    }
    return smallest_index;
}

// Sortowanie przez wybieranie
vector<int> selectionSort(vector<int> podana_lista)
{
    vector<int> nowa_lista;

    while (!podana_lista.empty())
    {
        int smallest_index = findSmallestIndex(podana_lista);
        nowa_lista.push_back(podana_lista[smallest_index]);
        podana_lista.erase(podana_lista.begin() + smallest_index); // usuwamy najmniejszy
    }

    return nowa_lista;
}

int main()
{
    int N;
    cout << "Podaj wielkosc tablicy: ";
    cin >> N;

    vector<int> podana_lista(N);
    cout << "Podaj " << N << " liczb:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> podana_lista[i];
    }

    vector<int> posortowana = selectionSort(podana_lista);

    cout << "Posortowana lista:\n";
    for (int x : posortowana)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
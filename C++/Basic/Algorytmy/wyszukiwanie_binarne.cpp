#include "std_lib_facilities.h"

void wyszukiwanie_binarne()
{
    int N;
    cout << "Podaj liczbe elementow w liscie: ";
    cin >> N;

    vector<int> podana_lista(N);  // dynamiczna tablica

    cout << "Podaj " << N << " posortowanych liczb (rosnaco):\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> podana_lista[i];
    }

    int szukany_element;
    cout << "Podaj liczbe do wyszukania: ";
    cin >> szukany_element;

    int low = 0;
    int high = N - 1;
    int mid;
    int guess;

    while (low <= high)
    {
        mid = (low + high) / 2;
        guess = podana_lista[mid];

        if (guess == szukany_element)
        {
            cout << "Znaleziono element na pozycji: " << mid << "\n";
            return;
        }
        else if (guess > szukany_element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Nie znaleziono elementu.\n";
}

int main()
{
    wyszukiwanie_binarne();
}

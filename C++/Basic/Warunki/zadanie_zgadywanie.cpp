#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;                 // Generator losowy
    mt19937 gen(rd());                // Mersenne Twister
    uniform_int_distribution<> dist(1, 9); // Zakres 1–9

    int losuj_liczbe = dist(gen);
    int zgadnij_liczbe;

    cout << "Zgadnij liczbę z przedziału 1–9: ";
    cin >> zgadnij_liczbe;

    while (zgadnij_liczbe != losuj_liczbe) {
        cout << "Źle! Spróbuj jeszcze raz: ";
        cin >> zgadnij_liczbe;
    }

    cout << "Brawo, zgadłeś! Liczba to: " << losuj_liczbe << endl;

    return 0;
}



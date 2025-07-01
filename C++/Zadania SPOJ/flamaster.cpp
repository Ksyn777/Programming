#include <iostream>
#include <string>

using namespace std;

int main() {
    string tekst;
    cout << "Podaj tekst: ";
    cin >> tekst;

    string wynik = "";

    char aktualny_znak = tekst[0];
    int licznik = 1;

    for (size_t i = 1; i < tekst.length(); i++) {
        if (tekst[i] == aktualny_znak) {
            licznik++;
        } else {
            if (licznik >= 3) {
                wynik += aktualny_znak;
                wynik += to_string(licznik);
            } else {
                // powtórz znak tyle razy ile wynosi licznik
                for (int j = 0; j < licznik; j++) {
                    wynik += aktualny_znak;
                }
            }
            aktualny_znak = tekst[i];
            licznik = 1;
        }
    }

    // Dopisz ostatni znak i licznik
    if (licznik >= 3) {
        wynik += aktualny_znak;
        wynik += to_string(licznik);
    } else {
        for (int j = 0; j < licznik; j++) {
            wynik += aktualny_znak;
        }
    }

    cout << wynik << endl;

    return 0;
}

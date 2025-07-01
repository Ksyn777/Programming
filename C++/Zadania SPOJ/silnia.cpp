#include <iostream>
using namespace std;

int main()
{
    int D;
    cin >> D;

    while (D--) {
        int n;
        cin >> n;

        if (n == 0 || n == 1) {
            cout << "0 1" << endl;
        }
        else if (n < 10) {
            int silnia = 1;
            for (int i = 2; i <= n; i++) {
                silnia *= i;
            }

            int jednosc = silnia % 10;
            int dziesiatki = (silnia / 10) % 10;

            cout << dziesiatki << " " << jednosc << endl;
        }
        else {
            cout << "0 0" << endl;
        }
    }

    return 0;
}

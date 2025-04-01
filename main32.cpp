#include <iostream>

using namespace std;

int main() {

    int t[]{4, 3, 2, 4, 5, 7};

    int wynik = 0;

    int n = sizeof(t) / sizeof(int);

    for (int i = 1; i < n;) {
        wynik = wynik + t[i];
        i++;
    }

    cout << "\nWynik: " << wynik;

    return 0;
}
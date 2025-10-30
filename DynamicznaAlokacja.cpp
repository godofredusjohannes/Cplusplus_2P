#include <iostream>

using namespace std;

void wczytaj(int t[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nPodaj liczbe " << i+1 << ": ";
        cin >> t[i];
        cout << endl;
    }
}

int suma(int t[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += t[i];
    }

    return suma;
}

double srednia(int suma, int n) {
    return suma / n;
}

int main() {

    int n;

    cout << "Podaj n: ";
    cin >> n;
    cout << endl;

    int *tab[n];

    wczytaj(*tab, n);

    cout << "Suma: " << suma(*tab, n) << endl;

    cout << "Srednia: " << srednia((*tab, n), n) << endl;

    return 0;
}
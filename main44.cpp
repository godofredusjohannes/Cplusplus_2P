#include <iostream>

using namespace std;

double potega_ujemna(int a, int b, double wynik){
    while (b < 0){
        wynik = wynik * a;
        b = b + 1;
    }

    while (b > 0){
        wynik = wynik * a;
        b = b - 1;
    }

    if (b == 0) {
        wynik = 1 / wynik;

        cout << "Wynik: " << wynik;

    }
    return 0;
}

int main() {

    int a, b;
    double wynik = 1;

    cout << "Wypisz a oraz b: " << endl;
    cin >> a;
    cout << endl;
    cin >> b;
    cout << endl << endl;

    potega_ujemna(a, b, wynik);

    return 0;
}
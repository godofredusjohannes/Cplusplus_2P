#include <iostream>

using namespace std;

int main() {

    double k;
    double cena;

    cout << "Ile przejechales kilometrow: ";
    cin >> k;
    cout << endl;

    if (k >= 0 && k <= 10){
        cena = 2;
        cout << "Nalezy zaplacic " << cena << endl;
    }
    else if (k >= 11 && k <= 30){
        if (k >= 30){
            cena = k + (k / 10);

        }
    }

    return 0;
}
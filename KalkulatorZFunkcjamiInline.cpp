#include <iostream>

using namespace std;

inline int dodaj(int a, int b) {
    return a + b;
}

inline int odejmij(int a, int b) {
    return a - b;
}

inline int mnozenie(int a, int b) {
    return a * b;
}

inline int dzielenie(int a, int b) {
    return a / b;
}

int main() {

    int a,b;
    char znak;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "\nPodaj znak (+,-,/,*): ";
    cin >> znak;
    cout << "\nPodaj liczbe b: ";
    cin >> b;

    switch (znak) {
        case '+': cout << dodaj(a,b); break;
        case '-': cout << odejmij(a, b); break;
        case '*': cout << mnozenie(a, b); break;
        case '/': cout << dzielenie(a, b); break;
        default: cout << "Bledny znak"; break;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int a, znak, b;
    int plus, minus, dzielenie, mnozenie;

    cout << "Wpisz liczbe a, znak (+, -, *, /) oraz liczbe b: ";
    cin >> a >> znak >> b;

    switch (znak) {
        case '+':
            plus = a + b;
            cout << "Wynik: " << plus;
            break;
        case '-':
            minus = a - b;
            cout << "Wynik: " << minus;
            break;
        case '*':
            mnozenie = a * b;
            cout << "Wynik: " << mnozenie;
            break;
        case '/':
            dzielenie = a / b;
            cout << "Wynik: " << dzielenie;
            break;
        default:
            cout << "Wprowadziles blad.";
    }


    return 0;
}
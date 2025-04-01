#include <iostream>

using namespace std;

int main() {
    char zn;

    cin >> zn;

    switch (zn) {
        case 'a':
            cout << "Wpisales litere a.";
            break;
        case '1':
            cout << "Wpisales liczbe 1.";
            break;
        default:
            cout << "Wpisales inna wartosc.";
    }


    return 0;
}
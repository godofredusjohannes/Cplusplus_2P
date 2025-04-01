#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Wpisz liczbe a: ";
    cin >> a;
    cout << "Wpisz liczbe b: ";
    cin >> b;

    for (int i = 0; i < 1; ++i) {
        if (a == b){
            cout << "Najwiekszy wspolny dzielnik to: " << a;
        }
        else if (a > b){
            a = a - b;
            i--;
        }
        else if (a < b){
            b = b - a;
            i--;
        }
    }

    return 0;
}
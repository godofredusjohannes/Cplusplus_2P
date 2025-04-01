#include <iostream>

using namespace std;

int main() {

    int x;

    cout << "Podaj x: ";
    cin >> x;

    if (x >= 0)
        cout << "\nWynik = " << x;
    else
        x = x - x - x;
    cout << "\nWynik = " << x;

    return 0;
}
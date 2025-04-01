#include <iostream>
using namespace std;

int main() {
    double przekroczenie;

    cout << "Podaj swoje przekroczenie predkosci (km): ";
    cin >> przekroczenie;

    if (przekroczenie<=10)
        cout << "Mandat wynosi 100zl";

    if (11<=przekroczenie<=30)
        cout << "Mandat wynosi 200zl";

    else
        cout << "Mandat wynosi 400zl";

    return 0;
}

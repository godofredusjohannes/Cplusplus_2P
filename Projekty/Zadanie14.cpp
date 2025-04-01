#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int b;
    double a, c, delta, x1, x2;

    cout << "Wypisz a: ";
    cin >> a;
    cout << endl;
    cout << "Wypisz b: ";
    cin >> b;
    cout << endl;
    cout << "Wypisz c: ";
    cin >> c;
    cout << endl;

    delta = (b^2) - (4 * a) * c;
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    if (delta > 0){
        cout << x1 << " lub " << x2;
    }
    else if (delta == 0) {
        cout << x1 << endl;
    }
        else
            cout << "NONE";
    return 0;
}
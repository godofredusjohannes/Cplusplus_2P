#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Podaj liczby a i b: ";
    cin >> b >> a;

    if (a>b)
        cout << "liczba " << a << " jest wieksza od liczby " << b << "." << endl;

    if (b>a)
        cout << "liczba " << b << " jest wieksza od liczby " << a << "." << endl;

    if (a>=0)
        cout << "Liczba " << a << " jest dodatnia." << endl;

    if (a<0)
        cout << "Liczba " << a << " jest ujemna." << endl;

    if (b>=0)
        cout << "Liczba " << b << " jest dodatnia." << endl;

    if (b<0)
        cout << "Liczba " << a << " jest ujemna." << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a,b;

    cout << "Podaj liczby a i b: " << endl;
    cin >> a >> b;

    double wynik1, wynik2, wynik3;

    wynik1 = pow(a,b);

    cout << a << " podniesione do potegi " << b << " wynosi: " << wynik1 << endl;

    wynik2 = fabs(a);

    cout << "Wartosc bezwzgledna " << a << " wynosi: " << wynik2 << endl;

    wynik3 = sqrt(a);

    cout << "Pierwiastek drugiego stopnia z " << a << " wynosi: " << wynik3 << endl;

    return 0;
}
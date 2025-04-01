#include <iostream>
#include <cmath>

using namespace std;

double nth_root(double a,double b)
{
    return pow(a,1/double(b));
}

int main() {

    double a, b;
    char znak;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "\nPodaj znak (+,-,*,/,p [Potega],r [Pierwiastek]): ";
    cin >> znak;
    cout << "\nPodaj liczbe b: ";
    cin >> b;

    switch (znak) {
        case '/':
            cout << a << " " << znak << " " << b << " = " << a / b;
        case '*':
            cout << a << " " << znak << " " << b << " = " << a / b;
        case '+':
            cout << a << " " << znak << " " << b << " = " << a / b;
        case '-':
            cout << a << " " << znak << " " << b << " = " << a / b;
        case 'r':
            cout << "Pierwiastek " << b << " stopnia z " << a << " = " << nth_root(a,b);
        case 'p':
            cout << a << " do potegi " << b << " = " << pow(a,b);
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Podaj a: ";
    cin >> a;

    int *p = &a;

    cout << "\nWartosc a: " << a << endl;
    cout << "Adres a: " << p << endl;
    cout << "Wartosc wskaznika p: " << &a << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl;


    return 0;
}
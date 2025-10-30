#include <iostream>

using namespace std;

void zamien(int *x, int *y) {

    int a, b;

    a = *y;
    b = *x;

    *x = a;
    *y = b;


}

int main() {

    int a,b;

    cout << "\nPodaj liczbe a: ";
    cin >> a;
    cout << "\nPodaj liczbe b: ";
    cin >> b;

    cout << "\nLiczba a: " << a << "\nLiczba b: " << b << endl;

    zamien(&a,&b);

    cout << "\nLiczba a po zamianie: " << a << "\nLiczba b po zamianie: " << b << endl;
    return 0;
}
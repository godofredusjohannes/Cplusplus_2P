#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << endl;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << endl;

    if (a%2==0 && b%2==0) {

        cout << "Liczby sa parzyste." << endl;

    }

    if (a%2==1 && b%2==1){

        cout << "Liczby sa nieparzyste." << endl;

    }

    if (a%2==1 && b%2==0){

        cout << "Liczba a jest nieparzysta a liczba b parzysta." << endl;

    }

    if (a%2==0 && b%2==1){

        cout << "Liczba a jest parzysta a liczba b nieparzysta." << endl;

    }

    if (a + b == 5){

        cout << "Suma liczb wynosi 5." << endl;

    }


    return 0;
}
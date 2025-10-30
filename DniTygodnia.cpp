#include <iostream>

using namespace std;

enum DniTygodnia {
    poniedzialek,
    wtorek,
    sroda,
    czwartek,
    piatek,
    sobota,
    niedziela
};

string jakiDzien(DniTygodnia dzien) {
    switch (dzien) {
        case poniedzialek:
            return "Poniedzialek";
        case wtorek:
            return "Wtorek";
        case sroda:
            return "Sroda";
        case czwartek:
            return "Czwartek";
        case piatek:
            return "Piatek";
        case sobota:
            return "Sobota";
        case niedziela:
            return "Niedziela";
    }
}

    int main() {

        DniTygodnia weekend = sobota;
        cout << jakiDzien(weekend) << endl;

        return 0;
    }
#include <iostream>

using namespace std;

class Prostopadloscian {
    public:
    int szerokosc, dlugosc, wysokosc;

    Prostopadloscian() {
        cout << "Podaj wielkosci cm: " << endl;
        cin >> wysokosc >> dlugosc >> szerokosc;
    }

    void objetosc() {
        int v = 0;
        v = szerokosc * wysokosc * dlugosc;
        cout << "Objetosc prostopadloscianu: " << v << endl;
    }

    void pole() {
        int p = 0;
        p = 2*(szerokosc*dlugosc+szerokosc*wysokosc+dlugosc*wysokosc);
        cout << "Pole prostopadloscianu: " << p << endl;
    }

};

int main() {

    Prostopadloscian pro;

    pro.objetosc();

    pro.pole();

    return 0;
}
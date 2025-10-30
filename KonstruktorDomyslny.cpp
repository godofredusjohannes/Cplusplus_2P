#include <iostream>

using namespace std;

class Osoba {
    public:
    string imie, nazwisko;
    Osoba();
    ~Osoba();
};

Osoba::Osoba() {
    cout << "Tworze nowy obiekt" << endl;
}

Osoba::~Osoba() {
    cout << "Niszcze obiekt" << endl;
}

void fun() {
    Osoba wojtek;
}

int main() {

    Osoba tytus;
    auto *maciek = new Osoba();
    delete maciek;

    return 0;
}

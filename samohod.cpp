#include <iostream>

using namespace std;

class samochod{
public:
    string marka, model, rok, typ;
    void setsamochod(string, string, int, string);
};

void samochod::setsamochod(string marka, string model, int rok, string typ) {
    this -> marka = marka;
    this -> model = model;
    this -> rok = rok;
    this -> typ = typ;
}

int main() {

    samochod hundai{"Hundai", "Explorer", "1999", "Diesel"};

    cout << "Marka: " << hundai.marka << endl;
    cout << "Model: " << hundai.model << endl;
    cout << "Rok: " << hundai.rok << endl;
    cout << "Typ: " << hundai.typ;

    return 0;
}
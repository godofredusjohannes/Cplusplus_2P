#include <iostream>

using namespace std;

class Samochod {
    public:
    string marka, model;
    int rok;
    double poj_silnika;
    Samochod(string, string, int, double);
};

Samochod::Samochod(string marka, string model, int rok, double poj_silnika) {
    this->marka = marka;
    this->model = model;
    this->rok = rok;
    this->poj_silnika = poj_silnika;
}

void wyswietlDane(string *marka, string *model, int rok, double poj_silnika) {
    cout << "\nMarka: " << marka << endl << "Model: " << model << endl << "Rok: " << rok << endl << "Pojemnosc silnika: " << poj_silnika << endl;
}

int main() {

    Samochod marek("Volvo", "Golf", 1994, 1.5l);
    Samochod piotr("Mitsubishi", "Kuruma", 2012, 45l);
    Samochod kajetan("Volkswagen", "Passat", 1941, 20l);

    Samochod tab[] = {marek,piotr,kajetan};

    for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++) {
        wyswietlDane(tab[i]);
    }

    return 0;
}

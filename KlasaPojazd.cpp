#include <iostream>

using namespace std;

enum rodzaj_paliwa {
    benzyna,
    diesel,
    lpg
};

struct Silnik {
    rodzaj_paliwa rodzaj;
    float pojemnosc;
};

struct Kola {
    int rozmiar;
    int inosc_kol;
};

struct Skrzynia {
    int il_biegow;
    bool czy_automat;
};

class Pojazd {
    bool powypadkowy {false};
public:
    Silnik silnik {benzyna, 1.6};
    Kola kola {16, 4};
    string marka{"Dacia"}, model = "Duster";
    Skrzynia biegi {6, true};
    Pojazd(bool,Silnik,Kola,string,string,Skrzynia);
    Pojazd(bool);
    void info() {
        switch (biegi.czy_automat) {
            case true:"Tak";
            case false:"Nie";
        }
        switch (powypadkowy) {
            case true:"Tak";
            case false:"Nie";
        }
        cout << "Powypadkowy: " << powypadkowy << endl;
        cout << "Rodzaj silnika: " << silnik.rodzaj << endl;
        cout << "Pojemnosc silnika: " << silnik.pojemnosc << endl;
        cout << "Rozmiar kol: " << kola.rozmiar << endl;
        cout << "Ilosc kol: " << kola.inosc_kol << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Ilosc biegow: " << biegi.il_biegow << endl;
        cout << "Czy automat: " << biegi.czy_automat << endl;
    }
};

Pojazd::Pojazd(bool powypadkowy,
        Silnik silnik,
        Kola kola,
        string marka,
        string model,
        Skrzynia biegi):
powypadkowy(powypadkowy),
silnik(silnik),
kola(kola),
marka(marka),
model(model),
biegi(biegi)
{}

Pojazd::Pojazd(bool powypadkowy): powypadkowy(powypadkowy){}

int main() {

    Pojazd focusMK2(true, {benzyna, 1.6}, {15, 4} ,"Ford", "Focus MK2", {5, false});

    Pojazd duster(false);

    focusMK2.info();

    duster.info();

    return 0;
}
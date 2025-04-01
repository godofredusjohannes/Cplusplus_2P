#include <iostream>

using namespace std;

class Pracownik{
public:
    string imie, nazwisko, ulica, kod_pocztowy, miejscowosc;
    int nr_domu;
    void wczytaj(string, string, string, int, string, string);
    void wizytowka();
};

void Pracownik::wczytaj(string imie, string nazwisko, string ulica, int nr_domu, string kod_pocztowy, string miejscowosc){
    this -> imie = imie;
    this -> nazwisko = nazwisko;
    this -> ulica = ulica;
    this -> nr_domu = nr_domu;
    this -> kod_pocztowy =  kod_pocztowy;
    this -> miejscowosc = miejscowosc;
}

void Pracownik::wizytowka(){
    cout << "-------------------------" << endl;
    for (int i = 0; i <= imie.length() - 1; ++i) {
        cout << " ";
    }
    cout << imie << " " << nazwisko;
    for (int i = 0; i <= nazwisko.length(); ++i) {
        cout << " ";
    }
    cout << endl;
    for (int i = 0; i <= ulica.length() - 7; ++i) {
        cout << " ";
    }
    cout << "ul. " << ulica << " " << nr_domu;
    cout << endl;
    for (int i = 0; i <= kod_pocztowy.length() - 2; ++i) {
        cout << " ";
    }
    cout << kod_pocztowy << " " << miejscowosc;
    cout << endl;
    cout << "-------------------------" << endl;
}

int main() {

    Pracownik pioter;

    pioter.imie = "Piotr";
    pioter.nazwisko = "Kowalski";
    pioter.ulica = "Kasztanska";
    pioter.nr_domu = 5;
    pioter.kod_pocztowy = "58-200";
    pioter.miejscowosc = "Przemkow";

    pioter.wizytowka();

    return 0;
}
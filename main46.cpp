#include <iostream>

using namespace std;

enum plec{
    kobieta,
    mezczyzna
};

enum kolorWlosow{
    blond,
    szatyn,
    brunet,
    rudy
};

enum kolorOczu{
    niebieskie,
    brazowe,
    zielone,
    szare
};

class Czlowiek{
public:
    plec sx;
    kolorWlosow wlosy;
    kolorOczu oczy;
    int wzrost;
    string imie;
    string nazwisko;
};

class Pracownik : public Czlowiek{
public:
    double salary;
    string stanowisko;
};

class Nauczyciel : public Pracownik{
public:
    string stanowisko = "Nauczyciel";
    string przedmiot;
};

class Rodzic : public Nauczyciel{
public:
    string zarobki;
};

class Uczen : public Rodzic{
public:
    string stanowisko = "Uczen";
    string wychowawca;
    string rodzic;
    int klasa;
};

class Sprzedawca : public Pracownik{
public:
    string stanowisko = "Sprzedawca";
    string produkt;
    string lokalizacjaSklepu;
};

int main() {
    Pracownik adam;
    adam.sx = mezczyzna;
    Nauczyciel kamil;
    kamil.przedmiot = "Programowanie obiektowe";
    kamil.sx = mezczyzna;
    Rodzic mikolaj;
    mikolaj.imie = "Mikolaj";
    mikolaj.nazwisko = "Lewicki";
    mikolaj.sx = kobieta;
    Uczen piotr;
    piotr.imie = "Piotr";
    piotr.nazwisko = "Kowalski";
    piotr.rodzic = "Mikolaj";
    piotr.wychowawca = "Kamil";
    piotr.klasa = 3;
    Sprzedawca golona;
    golona.produkt = "Makowiec";
    golona.lokalizacjaSklepu = "Komisariat policji";

    return 0;
}
#include <iostream>

using namespace std;

struct Data{
    int dd, mm, rr;
};

struct Adres{
    string ulica, nr_lokalu, nr_bud, kod_poczt, miejscowosc;

};

struct Osoba{
    string imie, nazwisko;
    long long pesel;
    Data data_urodzenia;
    Adres adres_osoby;
};

union Liczba{
    int calkowita;
    double rzeczywista;
};

int main() {

    Data data_urodzenia;
    data_urodzenia.dd = 30;
    data_urodzenia.mm = 11;
    data_urodzenia.rr = 1981;

    Data data_imienin {14, 7, 2025};

    Osoba osoba_1 {"Mariusz",
                   "Paruwa",
                   123455677,
                   {03,12,1999},
                   "Krasnostawska",
                   "7b",
                   "19",
                   "67-600",
                   "Krasnystaw"};

    Liczba a, b;





    return 0;
}

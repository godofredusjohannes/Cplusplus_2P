#include <iostream>

using namespace std;

class Uczen {
private:
    string imie,nazwisko;
    int wiek;
    double srednia;
public:
    Uczen(string,string,int,double);
    void pokazDane();
};

Uczen::Uczen(string imie, string nazwisko, int wiek, double srednia):
imie(imie), nazwisko(nazwisko), wiek(wiek), srednia(srednia){
}

void Uczen::pokazDane() {
    cout << imie << " " << nazwisko << " Wiek: " << wiek << " Srednia: " << srednia << endl;
}

int main() {

    Uczen Kowal{"Piotr", "Kowalski", 14, 3.56};

    Uczen Lewaj{"Mikolaj", "Lewacki", 12, 2.69};

    Kowal.pokazDane();

    Lewaj.pokazDane();

    return 0;
}

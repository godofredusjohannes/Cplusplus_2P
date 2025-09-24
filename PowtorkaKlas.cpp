#include <iostream>
#include "vector"

using namespace std;

class Osoba {
protected:
    int pesel;
public:
    string imie, nazwisko;
    void setOsoba(int, string, string);
};
class Uczen: public Osoba {
public:
    int nr;
    void setUczen(int, string, string, int);
};

class Nauczyciel: public Osoba {
    public:
    vector<string> przedmioty;
    void setNauczyciel(int, string, string, vector<string>);
};

class Klasa {
public:
    vector<Uczen> uczniowie;
    Nauczyciel wychowawca;
    Klasa(vector<Uczen>,Nauczyciel);
};

void Osoba::setOsoba(int pesel, string imie, string nazwisko) {
    this->pesel = pesel;
    this->imie = imie;
    this->nazwisko = nazwisko;
}

void Uczen::setUczen(int pesel, string imie, string nazwisko, int nr) {
    Osoba::setOsoba(pesel, imie, nazwisko);
    this->nr = nr;
}

void Nauczyciel::setNauczyciel(int pesel, string imie, string nazwisko, vector<string>) {
    Osoba::setOsoba(pesel, imie, nazwisko);
    this->przedmioty = przedmioty;
}

Klasa::Klasa(vector<Uczen> u, Nauczyciel n):uczniowie(u), wychowawca(n) {}


int main() {
    Uczen kajetan;
    kajetan.setUczen(6832676892,"Kajetan","Orzechowski",2);
    Uczen marian;
    marian.setUczen(8452758292,"Marian","Lewicki",1);
    Nauczyciel kamil;
    kamil.setNauczyciel(26575362856, "Kamil", "Sobczak", {"Informatyka","Progr. Ob"});

    Klasa zsp4p({
                {kajetan},
                {marian}
    },kamil
    );

    return 0;
}

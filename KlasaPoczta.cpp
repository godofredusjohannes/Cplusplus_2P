#include <iostream>

using namespace std;

class Poczta {
public:
    string nadawca;
    string odbiorca;
    string temat;
    string tresc;
};

void wczytaj(Poczta &p, string nadawca, string odbiorca, string temat, string tresc) {
    p.nadawca = nadawca;
    p.odbiorca = odbiorca;
    p.temat = temat;
    p.tresc = tresc;
}

void wypisz(const Poczta &p) {
    cout << "Nadawca: " << p.nadawca << endl;
    cout << "Odbiorca: " << p.odbiorca << endl;
    cout << "Temat: " << p.temat << endl;
    cout << "Tresc: " << p.tresc << endl;
}

int main() {
    Poczta dom;
    wczytaj(dom, "Mariusz", "Kuszent", "Dom", "Sprzontaj");
    wypisz(dom);

    return 0;
}

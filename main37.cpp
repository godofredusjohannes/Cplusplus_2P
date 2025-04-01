#include <iostream>

using namespace std;

class Poczta{
public:
    string nadawca;
    string odbiorca;
    string temat;
    string tresc;
    void wypisz();
    void wczytaj(string, string, string, string);
};

void Poczta::wczytaj(string nadawca, string odbiorca, string temat, string tresc) {
        this -> nadawca = nadawca;
        this -> odbiorca = odbiorca;
        this -> temat = temat;
        this -> tresc = tresc;
}
void Poczta::wypisz() {
    cout << "Nadawca: " << nadawca << endl;
    cout << "Odbiorca: " << odbiorca << endl;
    cout << "Temat: " << temat << endl;
    cout << "Tresc: " << tresc << endl;
}

int main() {

    Poczta dom("Mariusz", "Kuszent", "Dom", "Sprzontaj");
    dom.wypisz();

    return 0;
}
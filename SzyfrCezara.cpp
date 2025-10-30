#include <iostream>

using namespace std;

class Cezar {
public:
  string tekst_jawny, tekst_zaszyfrowany;
  int klucz;
    Cezar(string, int);
    void szyfruj() {
        string szyfr;
        for (int i = 0; i < tekst_jawny.size(); ++i) {
            char znak = tekst_jawny[i];

            if (znak >= 'a' && znak <= 'z') {
                znak = ((znak - 'a' + klucz) % 26) + 'a';
            } else if (znak >= 'A' && znak <= 'Z') {
                znak = ((znak - 'A' + klucz) % 26) + 'A';
            }
            szyfr += znak;
        }
        cout << szyfr << endl;
        tekst_zaszyfrowany = szyfr;
    }
    void deszyfruj() {
        string odszyfr;
        for (int i = 0; i < tekst_zaszyfrowany.size(); ++i) {
            char znak = tekst_zaszyfrowany[i];

            if (znak >= 'a' && znak <= 'z') {
                znak = ((znak - 'a' - klucz + 26) % 26) + 'a';
            } else if (znak >= 'A' && znak <= 'Z') {
                znak = ((znak - 'A' - klucz + 26) % 26) + 'A';
            }
            odszyfr += znak;
        }
        cout << odszyfr << endl;
    }
    };

Cezar::Cezar(string tekst_jawny, int klucz) {
    this->tekst_jawny = tekst_jawny;
    this->klucz = klucz;
}

int main() {

    Cezar jawny("Halyna", 4);

    jawny.szyfruj();

    jawny.deszyfruj();

    return 0;
}
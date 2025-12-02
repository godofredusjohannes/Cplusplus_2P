#include <iostream>
#include <fstream>

/*
 * fstream - zapis i odczyt
 * ifstream - odczyt do pliku
 * ofstream - zapis z pliku
 */

using namespace std;

const string _SCIEZKA = "dane.txt";

void zapisz_do_pliku(string do_pliku) {
 ofstream plik(_SCIEZKA, ios::app);
    if (plik) {
        plik << do_pliku;
    }
    else {
        cerr << "Nie mozna zapisac do pliku." << endl;
    }
}

void odczyt_z_pliku() {
    ifstream plik(_SCIEZKA);
    // Mozemy czytac:
    // 1. Slowo po slowie
    // 2. Znak po znaku
    // 3. Linia po linii
    if (plik) {
        /*
    string slowo;
        while (!plik.eof()) {
        plik >> slowo;
        cout << slowo;
        }
        */
        /*
        char zn;
        while (!plik.eof()) {
            zn = plik.get();
            cout << zn;
        }
        */
        string linia;
        while (getline(plik, linia)) {
            cout << linia << endl;
        }
    }
    else {
        cerr << "Nie mozna do pliku." << endl;
    }
}

void petla_foreach() {
    int tab[] = {6,1,7,9,3,5,8,9,3,1,5};
    for (int el:tab) {
        cout << el << " ";
    }
}

int main(){
    setlocale(LC_ALL, "pl_PL");
    // zapisz_do_pliku("To jest jakis krotki tekst\nkupujcie koszuleczki na godofredo.cupsell.pl");

    // odczyt_z_pliku();

    petla_foreach();

    return 0;
}

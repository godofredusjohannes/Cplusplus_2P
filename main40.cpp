#include <iostream>

using namespace std;

class Portfel{
public:

    int kwota, zarobione, wydane;

    void inicjuj(int);
    void zarobki(int);
    void wydatki(int);
    void zawartosc();
};

void Portfel::inicjuj(int kwota){
    this -> kwota = kwota;
    kwota = 0;
}

void Portfel::zarobki(int zarobione){
    cout << "Podaj zarobiony hajs: ";
    cin >> zarobione;
    kwota = kwota + zarobione;
}

void Portfel::wydatki(int wydane){
    this -> wydane = wydane;
    cout << "Podaj wydany hajs: ";
    cin >> wydane;
    kwota = kwota - wydane;
}

void Portfel::zawartosc() {

    cout << "Twoj portfel posiada: " << kwota << "zl." << endl;

}

int main() {

    Portfel *Mariusz6 = new Portfel(0);

    Mariusz6->zarobki(1000);

    Mariusz6->wydatki(500);

    Mariusz6->zawartosc();

    return 0;
}
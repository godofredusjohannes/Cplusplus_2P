#include <iostream>

using namespace std;

struct Fone{
    string marka, model;
    int cena;
    double przekatna_ekranu;
};


int main() {

    Fone markusi6{"Markusi", "6s Extreme Super Max Full", 139, 4.5};

    cout << "Marka: " << markusi6.marka << endl;
    cout << "Model: " << markusi6.model << endl;
    cout << "Cena: " << markusi6.cena << "zl" << endl;
    cout << "Przekatna ekranu: " << markusi6.przekatna_ekranu;

    return 0;
}

#include <iostream>

using namespace std;

class Car {
    public:
    string marka;
    int rok;

    void show() {
        cout << "Marka: " << marka << "\nRok: " << rok << endl;
    }
    void setData(string marka, int rok) {
        this->marka = marka;
        this->rok = rok;
    }
};

int main() {

    Car motorola3ds("Motorola 3DS",1467);
    motorola3ds.show();

    Car *kupka = &motorola3ds;
    kupka->show();

    Car *motorolaG60s = new Car("Motorola guwno60s",1583);
    motorolaG60s->show();

    delete motorolaG60s;

    Car *tab = new Car[5];

    tab [0].setData(string("Makita"), 1455);
    tab [1].setData(string("Ford"), 2345);
    tab [2].setData(string("Mitsubishi"), 6347);
    tab [3].setData(string("GeneralPorucznikJuzefNiesmiertelny"), 24234);
    tab [4].setData(string("Jowisz"), 1454);

    for (int i = 0; i < 4; i++) {
        tab[i].show();
    }

    return 0;
}
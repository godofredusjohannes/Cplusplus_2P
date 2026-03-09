#include <iostream>

using namespace std;

class Samochod {
    public:
    string marka, model;
    int rok_produkcji, przebieg;

    Samochod(string marka, string model, int rok_produkcji, int przebieg);
    Samochod(string marka, string model, int rok_produkcji);
    Samochod(string marka, string model);
    Samochod();

    void wyswietl() const {
        cout<<"\nMarka: "<<this->marka<<endl;
        cout<<"Model: "<<this->model<<endl;
        cout<<"Rok produkcji: "<<this->rok_produkcji<<endl;
        cout<<"Przebieg: "<<this->przebieg<<endl;
    }
};

Samochod::Samochod(string marka, string model, int rok_produkcji, int przebieg) {
    this->marka = marka;
    this->model = model;
    this->rok_produkcji = rok_produkcji;
    this->przebieg = przebieg;
}

Samochod::Samochod(string marka, string model, int rok_produkcji): Samochod(marka, model, rok_produkcji, 0) {}

Samochod::Samochod(string marka, string model): Samochod(marka, model, 2024, 0) {}

Samochod::Samochod(): Samochod("Nieznana", "Nieznana", 0, 0) {}

int main() {

    Samochod motorolaG60SPiotraKowalskiego("Motorola","G60S",2020,120056);

    motorolaG60SPiotraKowalskiego.wyswietl();

    Samochod samochod2("Toyota","Celica",2007);

    samochod2.wyswietl();

    Samochod samochod3("Mazda","MX6");

    samochod3.wyswietl();

    Samochod samochod4;

    samochod4.wyswietl();



    return 0;
}

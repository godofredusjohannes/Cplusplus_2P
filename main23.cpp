#include <iostream>

using namespace std;

class Samochod{
public:
    int kola_cale;
    float poj_silnika;
    int il_pasazerow;
    string nadwozie = "kombi";
    string marka, model;
    // Wlasciwosc /\ //
    void setDane(int kola, float poj_silnika, int il_pas, string nadwozie, string marka, string model){
        kola_cale = kola;
        this -> poj_silnika = poj_silnika;
        il_pasazerow = il_pas;
        this -> nadwozie = nadwozie;
        this -> marka= marka;
        this -> model = model;
    }
    // Ta funkcja jest nazywana setterem /\ //
    void getDane(){
        cout << "\n--------------------------------------------------" << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "\tNadwozie: " << nadwozie << endl;
        cout << "\tPojemnosc silnika: " << poj_silnika << endl;
        cout << "\tIlosc pasazerow: " << il_pasazerow << endl;
        cout << "\tRozmiar kol: " << kola_cale << endl;
        cout << "--------------------------------------------------" << endl;
    }
};
class Osoba{
public:
    int wiek;
    int wzrost;
    string plec, imie, nazwisko;
    int sila_w_riseofkingdoms;
    void setDane(int wiek, int wzrost, int sila, string plec, string imie, string nazwisko){
        this -> imie = imie;
        this -> nazwisko = nazwisko;
        this -> plec = plec;
        this -> wiek = wiek;
        this -> wzrost = wzrost;
        sila_w_riseofkingdoms = sila;
    }
    // Ta funkcja jest nazywana setterem /\ //
    void getDane(){
        cout << "\n--------------------------------------------------" << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "\tWiek: " << wiek << endl;
        cout << "\tPlec: " << plec << endl;
        cout << "\tWzrost: " << wzrost << endl;
        cout << "\tSila w Rise of kingdoms: " << sila_w_riseofkingdoms << endl;
        cout << "--------------------------------------------------" << endl;
    }
};

int main() {

    Samochod focusMk2;
    focusMk2.model = "Focus MK2";

    focusMk2.setDane(15, 1.6, 5, "kombi", "ford", "Focus MK2");

    focusMk2.getDane();

    Osoba lewicki;
    lewicki.setDane(12, 141, 1200, "Kobieta", "Mikolaj", "Lewicki");

    lewicki.getDane();

    return 0;
}
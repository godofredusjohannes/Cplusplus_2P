#include <iostream>
#include <vector>

using namespace std;

struct Pracownik {
    string imie;
    double pensja;
};

struct Adres {
    string ulica,kod_pocztowy,miasto;
    int nr_bud,nr_lokalu;
};

class Biuro {
public:
    vector<Pracownik> pracownicy;
    string nazwa,dzial;
    Adres adres;
    Biuro(vector<Pracownik>, string, string, Adres);
};

Biuro::Biuro(vector<Pracownik> pracownicy, string nazwa, string dzial, Adres adres):
pracownicy(pracownicy), nazwa(nazwa), dzial(dzial), adres(adres) {
cout << "Wywolano konstruktor parametryczny"<< endl;
}

int main() {

    Biuro rachunkowe({{"Ania",5000}, {"Janek",4500}, {"Wojtek",4300}},
        "Godofredo Industries", "Ksiegowosc",
        {"pl. Jana z Glogowa", "67-200", "Glogow", 7, 0});
    /*
     * lub
     * Biuro rachunkowe{{{"Ania",5000}, {"Janek",4500}, {"Wojtek",4300}},
                        "Godofredo Industries", "Ksiegowosc",
                        {"pl. Jana z Glogowa", "67-200", "Glogow", 7, 0}};
     */
    return 0;
}

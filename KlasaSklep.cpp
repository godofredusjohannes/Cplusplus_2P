#include <iostream>
#include <vector>

using namespace std;

struct Pracownik {
    string imie, nazwisko;
};

struct Towar {
    string nazwa;
    double cena;
};

class Sklep {
public:
    string nazwa;
    Pracownik pracownik;
    vector<Towar> towary;

    Sklep(string, Pracownik, vector<Towar>);
};

Sklep::Sklep(string nazwa, Pracownik pracownik, vector<Towar> towary)
    : nazwa(nazwa), pracownik(pracownik), towary(towary) {}

void showSklep(const Sklep& sklep) {
    cout << "Nazwa sklepu: " << sklep.nazwa << endl;
    cout << "Pracownik:\n\tImie: " << sklep.pracownik.imie << "\n\tNazwisko: " << sklep.pracownik.nazwisko << endl;
    cout << "Lista towarow:" << endl;
    for (const Towar& towar : sklep.towary) {
        cout << "\t" << towar.nazwa << " - cena: " << towar.cena << " zl" << endl;
    }
}

void mniejNiz8(const Sklep& sklep) {
    cout << "\nTowary z cena nizsza niz 8 zl:" << endl;
    for (const auto& towar : sklep.towary) {
        if (towar.cena < 8.0) {
            cout << "\t" << towar.nazwa << " - cena: " << towar.cena << " zl" << endl;
        }
    }
}

void dodajTowary(Sklep& sklep, const vector<Towar>& noweTowary) {
    for (const auto& towar : noweTowary) {
        sklep.towary.push_back(towar);
    }
}

int main() {
    Sklep microsoft("Microsoft", {"Mikolaj", "Lewicki"}, {
        {"Maslo", 10},
        {"Margaryna", 4},
        {"Ryz", 4.5},
        {"Chleb", 5}
    });

    showSklep(microsoft);

    mniejNiz8(microsoft);

    vector<Towar> noweTowary = {
        {"Jajka", 7.2},
        {"Mleko", 6.5}
    };
    dodajTowary(microsoft, noweTowary);

    cout << "\nPo dodaniu nowych towarow:\n";
    showSklep(microsoft);

    return 0;
}
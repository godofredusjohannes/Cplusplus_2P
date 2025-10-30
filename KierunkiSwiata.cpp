#include <iostream>

using namespace std;

enum KierunkiSwiata {
    polnoc,
    poludnie,
    wschod,
    zachod
};

string jakiKierunek(KierunkiSwiata kierunek) {
    switch (kierunek) {
        case polnoc:
            return "Polnoc";
        case poludnie:
            return "Poludnie";
        case wschod:
            return "Wschod";
        case zachod:
            return "Zachod";

    }
}

int main() {
    string placeholderKierunek;
    KierunkiSwiata kierunek;

    cout << "Podaj kierunek (N, S, E, W): ";
    cin >> placeholderKierunek;

    switch (placeholderKierunek) {
        case "N":
            kierunek = polnoc;
        case "S":
            kierunek = poludnie;
        case "E":
            kierunek = wschod;
        case "W":
            kierunek = zachod;
        default:
            cout << "Bledny kierunek" << endl; return 0;
    }


    cout << "Wybrano kierunek: " << jakiKierunek(kierunek) << endl;

    return 0;
}

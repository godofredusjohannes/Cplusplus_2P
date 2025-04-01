#include <iostream>

using namespace std;

enum oceny{
    Niedostateczna = 1,
    Dopuszczajaca = 2,
    Dostateczna = 3,
    Dobra = 4,
    BardzoDobra = 5,
    Celujaca = 6,
};

string show_oceny(oceny a){
    switch (a) {
        case Celujaca:
            return "Celujaca";
        case BardzoDobra:
            return "Bardzo Dobra";
        case Dobra:
            return "Dobra";
        case Dostateczna:
            return "Dostateczna";
        case Dopuszczajaca:
            return "Dopuszczajaca";
        default:
            return "Niedostateczna";
    }
}

int main() {
    oceny matematyka = Dostateczna;
    oceny biologia = Dobra;
    cout << "Matematyka: " << show_oceny(matematyka) << endl;
    cout << "Biologia: " << show_oceny(biologia) << endl;


    return 0;
}
#include <iostream>

using namespace std;

enum oceny{
    ndst = 1,
    dop = 2,
    dst = 3,
    db = 4,
    bdb = 5,
    cel = 6
};

string returnOcena(oceny o){
    switch (o) {
        case ndst:
            return "Niedostateczna";
        case dop:
            return "Dopuszczajaca";
        case dst:
            return "Dostateczna";
        case db:
            return "Dobra";
        case bdb:
            return "Bardzo dobra";
        case cel:
            return "Celujaca";
    }


}

int main() {
    char imie;
    int ocena;
    oceny imie = ocena;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << endl;
    cout << "Podaj swoja ocene z biologii (1-6): ";
    cin >>
    cout << "Pawel: " << returnOcena(imie) << endl;

    return 0;
}
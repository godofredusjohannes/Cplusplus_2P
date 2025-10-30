#include <iostream>

using namespace std;

enum Oceny {
    niedostateczny,
    dopuszczajacy,
    dostateczny,
    dobry,
    bardzo_dobry,
    celujacy,
};

string jakaOcena(Oceny ocena) {
    switch (ocena) {
        case niedostateczny:
            return "Ndst (1)";
        case dopuszczajacy:
            return "Dop (2)";
        case dostateczny:
            return "Dst (3)";
        case dobry:
            return "Db (4)";
        case bardzo_dobry:
            return "Bdb (5)";
        case celujacy:
            return "Cel (6)";
    }
}

int main() {

    Oceny matma = dostateczny;
    cout << jakaOcena(matma) << endl;

    return 0;
}
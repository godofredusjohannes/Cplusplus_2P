#include <iostream>

using namespace std;

enum stanowisko{
    dyrektor,
    zastepcaDyrektora,
    sekretarka,
    konserwator,
    nauczyciel,
    pracownikProdukcji,
    sprzataczka,
    uczen,
    doltabeli
};

string returnStanowisko(stanowisko s){
    switch (s) {
        case dyrektor: return "dyrektor";
        case zastepcaDyrektora: return "zastepcaDyrektora";
        case sekretarka: return "sekretarka";
        case konserwator: return "konserwator";
        case nauczyciel: return "nauczyciel";
        case pracownikProdukcji: return "pracownikProdukcji";
        case sprzataczka: return "sprzataczka";
        case uczen: return "uczen";
        case doltabeli: return "mr.doltabeli_official_official";
    }


}

int main() {
    stanowisko pawel = dyrektor;
    stanowisko ewa = nauczyciel;
    stanowisko ptoszka = uczen;
    stanowisko michalGolonko = doltabeli;
    cout << "Pawel: " << returnStanowisko(pawel) << endl;
    cout << "Ewa: " << returnStanowisko(ewa) << endl;
    cout << "Piort Kowalski: " << returnStanowisko(ptoszka) << endl;
    cout << "Michal Golonko: " << returnStanowisko(michalGolonko) << endl;

    return 0;
}
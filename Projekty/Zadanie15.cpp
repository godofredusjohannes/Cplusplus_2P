#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b;

    cout << "Podaj wiek osoby pierwszej: ";
    cin >> a;
    cout << endl;
    cout << "Podaj wiek osoby drugiej: ";
    cin >> b;
    cout << endl;

    if (a > 100 && b > 100) {
        cout << "Wpisales klamstwo." << endl;
    }
    else if (a > b){
        cout << "Osoba pierwsza jest starsza od osoby drugiej." << endl;
    }
    else if (a < b){
        cout << "Osoba druga jest starsza od osoby pierwszej." << endl;
    }
    return 0;
}
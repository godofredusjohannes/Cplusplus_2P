#include <iostream>

using namespace std;

int main() {

    char pole;

    cout << "Wpisz dowolny znak: ";
    cin >> pole;
    cout << endl;

    if (islower(pole)){
        cout << "Znak jest mala litera." << endl;
    }
    if (isupper(pole)){
        cout << "Znak jest duza litera." << endl;
    }
    if (isnumber(pole)){
        cout << "Znak jest cyfra." << endl;
    }
    else {
        cout << "Znak jest innym znakiem." << endl;
    }


    return 0;
}
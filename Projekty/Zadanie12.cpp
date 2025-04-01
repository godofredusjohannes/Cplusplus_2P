#include <iostream>

using namespace std;

int main() {

    int wys, szer;

    cout << "Podaj szerokosc: ";
    cin >> wys;
    cout << "Podaj wysokosc: ";
    cin >> szer;

    cout << "\n\n\r";

    for (int w = 1; w <= wys; w++){
        for (int s = 1; s <= szer; s++)
            if (w != 1 && w != wys && s != 1 && s != szer)
            cout << " ";
        else
                cout << "X";
        cout << "\n";
    }

    return 0;
}
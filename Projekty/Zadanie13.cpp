#include <iostream>

using namespace std;

int main() {

    int wys, szer;

    cout << "Wpisz wielkosc litery (Min.6): ";
    cin >> wys;

    szer = wys * 1.83;

    for (int w = 0; w < wys; ++w) {
        for (int s = 0; s < wys - w; s++)
            cout << " ";
        cout << "A";
        if (w > 0) {
            for (int k = 1; k < w + w; k++)
                if (w != (wys / 2) + 1)
                    cout << " ";
                else {
                    cout << "A" << endl;
                }
            else{
                cout << endl;
            }
        }
    }
        return 0;
    }
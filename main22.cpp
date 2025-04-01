#include <iostream>

using namespace std;

int main() {

    int h, s;

    cout << "Podaj wyokosc: ";
    cin >> h;
    cout << "\nPodaj szerokosc: ";
    cin >> s;

    for (int i = 0; i < h; ++i) {
        for (int j = 1; j <= (s - i) / 2; ++j) {
            cout << " ";
            ++j;
        }
        for (int j = 1; j <= i; ++j) {
            cout << "A";
        }
        cout << endl;
    }

    return 0;
}
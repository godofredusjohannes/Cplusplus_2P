#include <iostream>

using namespace std;

void sito(int n, int tab[]) {

    int w = 0;

    for (int i = 2; i < n; i++) {
        tab[i] = true;
    }

    for (int i = 2; i < n;) {
        if (i >= n) {
            i = 2;
            if (i > n) {
                break;
            }
            if (tab[i] == true) {
                    i++;
                }
            else {
                    cout << tab[i] << endl;
                    i++;
            }
        }
        else {
            w = i + i;
            if (w > n) {
                i++;
            }
            else {
                tab[w] = false;
                w += i;
            }
        }
        cout << tab[n] << endl;
    }
}

int main(){

    int n;

    cout << "Wypisz ilosc elementow: ";

    cin >> n;

    int tab[n];

    sito(n, tab);

    return 0;
}
#include <iostream>

using namespace std;

int sort_zliczanie(int tab[], int n) {
    int max = 0, x = 0;
    cout << "Seweryn Poczynek 3P" << endl;
    cout << "Nieposortowana tablica: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "[" << tab[i] << "]";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    int sort[max];
    for (int i = 0; i < max; i++) {
        sort[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        x = tab[i];
        sort[x] += 1;
    }
    cout << "Posortowana tablica: " << endl;
    for (int i = 0; i <= max; i++) {
        if (sort[i] > 0) {
            for (int j = 0; j < sort[i]; j++) {
                cout << "[" << i << "]";
            }
        }
    }
}

int main() {
    int tab[] = {8,7,2,8,5,3,1,2,7,7};
    int n = sizeof(tab) / sizeof(tab[0]);
    sort_zliczanie(tab, n);
    return 0;
}
#include <iostream>

using namespace std;



int main() {

    int n;

    cout << "Podaj n (ilosc elementow tablicy): ";
    cin >> n;

    int *tab =  new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj element " << i+1 << ": ";
        cin >> tab[i];
    }

    cout << endl;

    int srednia = 0;

    for (int i = 0; i < n; i++) {
        srednia += tab[i];
    }

    srednia /= n;

    cout << srednia << endl;

    delete [] tab;

    return 0;
}
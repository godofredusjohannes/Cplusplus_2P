#include <iostream>

using namespace std;

int main() {

    int *liczba = new int;
    *liczba = 10;
    cout << *liczba << endl;
    delete liczba;
    cout << *liczba << endl;

    int *tab = new int[] {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; ++i) {
        cout << tab[i] << " ";
    }

    return 0;
}
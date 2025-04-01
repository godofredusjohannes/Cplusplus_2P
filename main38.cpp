#include <iostream>

using namespace std;

int wartownik(int t[], int n, int x){

    int tab[n+1];
    for (int i = 0; i < n; ++i) {
        tab[i] = t [i];
        tab[n] = x;
    }

    int i = 0;
    while (x != tab[i])
        i++;

    return (i == n-1) ? false: true;
}

int main() {

    int t[] = {4,3,2,5,7,2,5};

    cout << wartownik(t, 7,9);

    return 0;
}
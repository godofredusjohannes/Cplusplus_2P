#include <iostream>

using namespace std;

bool wartownik(int t[], int n, int x){

    int tx[n+1];
        for (int i = 0; i < n; ++i)
            tx[i] = t[i];
        tx[n] = x;

    int i = 0;
    while (tx[i] !=  x)
        i++;

    if (i == n)
        return false;
    else
        return true;
}

int main() {

    int t[7] = {5, 3, 8, 1, 4, 7};

    int n = sizeof(t)/sizeof(int);

    cout << wartownik(t, n, 3);

    return 0;
}
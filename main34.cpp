#include <iostream>

using namespace std;

int suma(int &a, int b){
    a = 20;
    return a + b;
}

// Zwykle (Szybsze)
int silnia(int n){
    if (n == 0 || n == 1) return 1;
    int wynik = 1;
    for (int i = 2; i <= n; ++i)
        wynik *= i;
    return wynik;
}

// Rekurencyjne (Wolniejsze)
int silniaRek(int n){
    if (n == 0 || n == 1) return 1;
    return n * silniaRek(n - 1);
}

int main() {

    int a = 10, b = 11;

    cout << silnia(5);

    return 0;
}
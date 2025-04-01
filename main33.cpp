#include <iostream>

using namespace std;

int main() {

    int tab[] {1,4,5,2,5,2,3,3,7,8,3,8,0,1,9};

    int wynik = 0;

    int x;

    int n = sizeof(tab)/sizeof(int);

    cout << "Wpisz liczbe x: ";
    cin >> x;

    for (int i = 0; i < n;) {
        if (tab[i] == x){
            wynik = wynik + 1;
            i++;
        }
        else{
         i++;
        }
    }
            cout << "\nWynik: " << wynik << endl;
    return 0;
}
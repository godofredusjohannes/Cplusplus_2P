#include <iostream>

using namespace std;

void showArray(int t[], int n){
    for (int i = 0 ; i < n ; i++)
        cout << t[i] << " ";
}

bool isArrayInOrder(int t[], int n){
    int x = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (t[i] >= x)
            x = t[i];
        else
            return false;
    }
    return true;
}

int main() {

    int t[5] = {1, 2, 3, 4, 5};

    int n = sizeof(t)/sizeof(int);

    showArray(t, n);

    cout << "\nCzy tablica t jest posortowana? " << endl;

    cout << "\n1 = prawda\n0 = falsz\n" << endl;

    cout << "Odpowiedz: " << isArrayInOrder(t, n);

    return 0;
}
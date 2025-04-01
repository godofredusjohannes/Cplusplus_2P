#include <iostream>

using namespace std;

void zmienA(string a) {
    a = "Ala ma psa";
}

void zmienT(int t[], int n){
    for (int i; i < n; i++) {
        t[i] = n - i;
    }
}

int main() {

    string a = "Antek ma psa";
    zmienA(a);
    cout << a;
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    zmienT(t, sizeof(t)/sizeof(int));
    for (int el : t){
        cout << el << " ";
    }

    return 0;
}
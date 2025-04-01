#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int liczby[10];
    for (int i = 0; i < 10; i++){
        cout << "Wpisz liczbe: [" << i << "]: ";
        cin >> liczby[i];
        cout << endl;
    }
    for (int i = 10; i >= 0; i--) {


        cout << "[" << liczby[i] << "] ";
    }
    return 0;
}
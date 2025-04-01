#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Wprowadz ilosc liczb: ";
    cin >> a;
    cout << endl;
    int *liczby = new int[a];
    delete []liczby;
    cout << "Wprowadz liczby: ";
    for (int i = 0; i < a; ++i) {
        cin >> ;
    }
    return 0;
}
#include <iostream>

using namespace std;

template <typename T1, typename T2>
T1 eszkere(T1 a, T2 b){
    return a + b;
}

int main() {
    double a, b;
    cout << "Wpisz a: ";
    cin >> a;
    cout << "Wpisz b: ";
    cin >> b;
    cout << eszkere(a, b);

    return 0;
}
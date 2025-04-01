#include <iostream>
using namespace std;

int main() {
    double a, b, c, sr;
    cout << "Wprowadz trzy liczby: ";
    cin >> a;
    cin >> b;
    cin >> c;
    sr = (a + b + c) / 3;
    cout << "Srednia wynosi: " << sr << endl;
    return 0;
}

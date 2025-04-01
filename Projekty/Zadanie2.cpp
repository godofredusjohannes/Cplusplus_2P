#include <iostream>
using namespace std;

int main() {
    int a, b;
    int pole, obwod;
    cout << "Podaj bok prostokatu a: ";
    cin >> a;
    cout << "Podaj bok prostokatu b: ";
    cin >> b;
    pole = a * b;
    obwod = (2 * a) + (2 * b);
    cout << "Pole wynosi: " << pole << endl;
    cout << "Obwod wynosi: " << obwod << endl;
    return 0;
}

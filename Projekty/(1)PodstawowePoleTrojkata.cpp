#include <iostream>

using namespace std;

int main() {
    int a, h;
    double pole;
    cout << "Podaj podstawe twojkata a: " << endl;
    cin >> a;
    cout << "Podaj wyskoksc trojkata h: ";
    cin >> h;
    pole = 0.5 * a * h;
    cout << "Pole trojkata wynosi: " << pole << endl;
     return 0;
}
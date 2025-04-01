#include <iostream>
#include <cmath>

using namespace std;

int suma(int x, int y){
    return x + y;
}

int roznica(int x, int y){
    return x - y;
}

int pole_powierzchni(int r, int h){

    double pole = 2 * M_PI * r * (r + h);

    return pole;
}

int objetosc(int r, int h){

    double obj = M_PI * (r * r) * h;

    return obj;
}

int main() {

    int x;
    int y;
    int r;
    int h;

    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << endl;
    cout << "Podaj liczbe y: ";
    cin >> y;
    cout << endl;
    cout << "Podaj promien podstawy walca r (cm): ";
    cin >> r;
    cout << endl;
    cout << "Podaj wysokosc walca h (cm): ";
    cin >> h;
    cout << endl;

    cout << "\nSuma: " << suma(x, y) << endl;
    cout << "\nRoznica: " << roznica(x, y) << endl;
    cout << "\nPole powierzchni walca: " << pole_powierzchni(r, h) << "cm3" << endl;
    cout << "\nObjetosc walca: " << objetosc(r, h) << "cm2" << endl;





    return 0;
}

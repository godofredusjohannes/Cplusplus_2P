#include <iostream>

using namespace std;

double suma(double a, double b){

    return a + b;
}

double roznica(double a, double b){

    return a - b;
}

double iloczyn(double a, double b){

    return a * b;
}

double iloraz(double a, double b){

    return a / b;
}

void show(string txt){
    cout << txt << endl;
}

int main() {

    show("Tekst");

    cout << "Suma: " << suma(5, 5) << endl;
    cout << "Roznica: " << roznica(10, 4) << endl;
    cout << "Iloczyn: " << iloczyn(4, 7) << endl;
    cout << "Iloraz: " << iloraz(19, 3) << endl;

    return 0;
}
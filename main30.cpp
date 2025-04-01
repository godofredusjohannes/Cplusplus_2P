#include <iostream>

using namespace std;

void wartosc(int a){
    a = 777;
}

void referencja(int &a){
    a = 555;
}

void wskaznik(int *a){
    *a = 333
}

void obiekt(Samochod car){

}

int main() {

    int a = 909;
    wartosc(a);
    cout << "Po wartosc: " << a << endl;
    referencja(a);
    cout << "Po referencja: " << a << endl;
    wskaznik(&a);
    cout << "Po wskaznik: " << a << endl;


    return 0;
}
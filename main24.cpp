#include <iostream>

using namespace std;

// Przeciazanie

int suma(int a, int b){
    return a + b;
}
int suma(int a, double b){
    return a + b;
}
int suma(int a, int b, int c){
    return a + b + c;
}
char suma(int a, int b, int c, int d){
    return a + b + c + d;
}

int main() {

    cout << suma(10, 13, 15);

    return 0;
}
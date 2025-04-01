#include <iostream>

using namespace std;

int main() {

    // &a - adres zmiennej, *wsk - wartosc zmiennej

    int a = 20;
    int *wsk = &a;
    cout << &a << " : " << *wsk;

    return 0;
}

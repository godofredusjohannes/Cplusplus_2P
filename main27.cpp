#include <iostream>

using namespace std;

void licznik(){
    static int licznik = 0;
    licznik++;
    cout << licznik << endl;
}

int main() {

    licznik();
    licznik();
    licznik();
    licznik();
    licznik();

    return 0;
}
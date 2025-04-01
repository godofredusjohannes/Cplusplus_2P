#include <iostream>

using namespace std;

string wzrost() {

    string cm;

    cout << "Wypisz wzrost: ";
    cin >> cm;

    return cm;
}

int main() {

    if (wzrost()<=150)

    return 0;
}
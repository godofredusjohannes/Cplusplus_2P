#include <iostream>

using namespace std;

int main() {

    int gw = 1;

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < gw; i++) {
            cout << "o";
        }
        cout << "\n"; gw++;
    }
    return 0;
}
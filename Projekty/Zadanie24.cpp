#include <iostream>

using namespace std;

int main() {



    for (int i = 1;i <= 5; ++i) {
        cout << i << " ";
    }
        cout << "\n";
        for (int j = 2; j <= 5; ++j) {
            for (int i = 1; i <= 5; ++i) {
                cout << j * i << " ";
            }
            cout << "\n";
        }



    return 0;
}
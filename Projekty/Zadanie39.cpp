#include <iostream>

using namespace std;

int main() {

    srand(time(nullptr));

    int t[10][10];

    for (int w = 0; w < 10; ++w) {
        for (int k = 0; k < 10; ++k)
            t[w][k] = rand() % 899 + 100;
            cout << endl;
    }



    return 0;
}
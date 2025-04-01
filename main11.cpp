#include <iostream>

using namespace std;

int main() {

    // *(wsk + i) lub wsk[i]

    int *wsk = new int[5];
    for (int i = 0; i < 5; ++i)
        *(wsk + i) = i + 1;
    for (int i = 0; i < 5; ++i) {
        cout << *(wsk + i) << " ";
    }
    delete[]wsk;

    return 0;
}
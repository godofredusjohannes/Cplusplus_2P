#include <iostream>

using namespace std;

void sitoE(int n = 2){
    n = n + 1;
    bool sito[n];
    sito[0] = 0;
    sito[1] = 1;

    for (int i = 2; i < n; ++i)
        sito[i] = 1;

    for (int i = 2; i < n; ++i) {
        if (sito[1] == 1){
            for (int j = i * 2; j < n; j += i) {
                sito[j] = 0;
            }
        }
        else
            continue;

    }

    for (int i = 2; i < n; i++) {
        if (sito[i] == 1)
            cout << i << " ";
    }
}

int main() {
    sitoE(8367855);
    return 0;
}

#include <iostream>

using namespace std;


void t(int t[]){
    for (int i = 0; i < sizeof(t+1); ++i) {
        cout << t[i] << " ";
    }
}

int main() {

    int tab[8] {1,4,2,5,2,6,6,4};

    t(tab);

    return 0;
}

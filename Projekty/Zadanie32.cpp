#include <iostream>

using namespace std;


void zmienT2(int t2[], int m, int t1[], int n){
    for (int j; j < m; j++) {
        t2[j] = t1 ;
    }
    for (int i; i < n; i++) {
        t1[i] = t2 - ;
}

int main() {

    int t1 [5] = {1, 2, 3, 4, 5};

    int t2 [5] = {5, 4, 3, 2, 1};

    cout << "t1: " << t1 << endl;

    cout << "t2: " << t2 << endl;

    zmienT1(t1, sizeof(t1)/sizeof(int));

    cout << "t1: " << zmienT1;

    for (int el : t1){
        cout << el << " ";
    }

    cout << endl;

    cout << "t2: ";

    zmienT2(t2, sizeof(t2)/sizeof(int));

    for (int el : t2){
        cout << el << " ";
    }

    return 0;
}
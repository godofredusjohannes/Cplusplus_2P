#include <iostream>

using namespace std;

int main() {

    int a = 7;
    int *wsk = &a;
    cout << *wsk << endl;
    *wsk = 20;
    wsk = new int[5];
    for (int i = 0; i < 5; ++i)
        *(wsk + i) = i + 1;
    for (int i = 0; i < 5; ++i)
        cout << "[" << *(wsk + i) << "] ";
    delete[]wsk;


    return 0;
}
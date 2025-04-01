#include <iostream>

using namespace std;

int main() {

    char zn = 'd';
    char *wsk = &zn;
    char *wsk2 = wsk;
    cout << *wsk2;

    return 0;
}
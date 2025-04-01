#include <iostream>

using namespace std;

int main() {

    double *wsk = new double;
    *wsk = 78;
    cout << *wsk;
    delete wsk;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    float a = 20;
    float *wsk = &a;
    *wsk = 30;
    cout << a;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 10;
    int *tab = new int[n];
    delete[] tab;
    return 0;
}
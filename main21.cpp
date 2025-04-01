#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vec[] {5,3,2,5,6,3,2,6,7,3};
    sort(vec, vec+10);
    for (int el : vec) {
        cout << el << " ";
    }


    return 0;
}
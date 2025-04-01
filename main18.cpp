#include <iostream>
#include <vector>

using namespace std;

int main() {
    srand(time(NULL));

    int a;

    cout << "Podaj liczbe rzutow: ";
    cin >> a;
    cout << endl;

    vector <int> vec;

    for (int i = 0; i < a;) {
        vec.insert(vec.cbegin()+i, 1+ (rand() % 6));
        ++i;
    }

    cout << "Wylosowano: ";
    for (int el : vec) {
        cout << "[" << el << "] ";
    }

    return 0;
}
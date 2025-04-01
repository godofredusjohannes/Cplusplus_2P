#include <iostream>
#include <vector>

using namespace std;

int main() {

    int v0, v1, v2, v3, v4, v5, v6, v7, v8, v9;

    cout << "Podaj kolejno 10 liczb: ";
    cin >> v0;
    cin >> v1;
    cin >> v2;
    cin >> v3;
    cin >> v4;
    cin >> v5;
    cin >> v6;
    cin >> v7;
    cin >> v8;
    cin >> v9;

    vector <int> vec = {v0, v1, v2, v3, v4, v5, v6, v7, v8, v9};

    for (int el : vec) {
        cout << "[" << el << "] ";
    }

    return 0;
}
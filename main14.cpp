#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t[] = {1, 2, 3, 4};
    //cout << *(t+1);
    vector <int> vec = {1, 2, 3, 4};
    //cout << vec[2];
    vec.push_back(101);
    vec.erase(vec.cbegin()+2);
    vec.erase(vec.cend()-1);
    vec.insert(vec.cbegin()+2, 222);
    for (int i = 0; i < vec.size(); ++i) {
        cout << "[" << vec[i] << "] ";
    }

    cout << "\n\n";

    for (int el : vec) {
        cout << el << " ";
    }

    return 0;
}
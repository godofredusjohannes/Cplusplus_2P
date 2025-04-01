#include <iostream>

using namespace std;



int main() {

    int t[] = {4, 3, 2, 4, 5, 7};

    int t2[2][3] = {
                    {1, 2, 3},
                    {4, 5, 6}
    };

    for (int w = 0; w < 2; ++w) {
        for (int k = 0; k < 3; ++k)
            cout << t2[w][k] << " ";
            cout << endl;
    }



    return 0;
}
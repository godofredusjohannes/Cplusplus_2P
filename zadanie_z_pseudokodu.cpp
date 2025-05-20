#include <iostream>

using namespace std;

/* a)
const int n = 3, m = 3;
*/

/* b)
const int n = 5, m = 3;
*/

/* a)
const int n = 5, m = 5;
*/

bool pseudokod(int A[n][m]) {

    bool P[n][m];

    P[0][0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == 0) {
                P[i][j] = false;
            }
            else {
                if (i = 1 && j != 1) {
                    P[i][j] = P[i][j - 1];
                }
                else if (i != 1 && j == 1){
                    P[i][j] = P[i - 1][j];
                }
                else if (i != 1 && j != 1) {
                    P[i][j] = P[i][j - 1] || P[i - 1][j];
                }
            }
        }
    }
    return P[n - 1][m - 1];
}

int main() {

    int A[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = 1;
        }
    }


    /*a)
    A[0][1] = 0;
    A[1][2] = 0;
    */

    /*b)
    A[0][1] = 0;
    A[1][1] = 0;
    A[1][3] = 0;
    A[2][3] = 0;
    */

    /*c)
    A[1][0] = 0;
    A[2][0] = 1;
    A[3][0] = 1;
    A[4][0] = 1;
    A[1][2] = 1;
    A[1][3] = 1;
    A[2][0] = 1;
    A[2][2] = 1;
    A[2][3] = 1;
    A[3][0] = 1;
    A[3][4] = 1;
    */

    cout << pseudokod(A);

    return 0;
}

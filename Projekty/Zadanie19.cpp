#include <iostream>

using namespace std;

int main() {

    int t[] = {4,6,7,4,5,6,7,2,4,7,8,3,1};
    int x = 6;
    bool znaleziono = false;
    for (int i = 0; i < sizeof(t); ++i) {
        for (int t[i] == x; ++j) {
        }
            if (t[i] == sizeof(t)){
            cout << "W bazie jest " << j << " szukanego " << x << endl;
            znaleziono = true;
            break;
         }
    }
    if (!znaleziono)
        cout << "Dany element nie znajduje sie w tablicy \n";

    return 0;
}
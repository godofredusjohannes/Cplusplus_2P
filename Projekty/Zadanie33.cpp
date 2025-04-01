#include <iostream>

using namespace std;


int main() {

    int i = 0;
    bool czy = true;

    while(czy){
        cout << "Wykonalem petle while " << endl;
        i++;
        if (i > 10)
            break;
    }

    do{
        cout << "Wykonalem petle do..while " << endl;
        i++;
        if (i > 10)
            break;
    } while(czy);

    return 0;
}
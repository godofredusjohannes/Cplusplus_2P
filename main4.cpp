#include <iostream>
#include <map>

using namespace std;

bool czy_istnieje(map <char, char> &a, char b){
    for (auto el : a)
        if (el.second == b)
            return true;
    return false;
}

int main() {
    srand(time(nullptr));
    map <char, char> wzor;
    wzor['A'] = rand()%90 + 65;
    // 65 ... 90
    char zn = rand()%90 + 65;
    for (int i = 66; i <= 90; ++i) {
        while (czy_istnieje(wzor, zn))
            zn = rand()%90 + 65;
        wzor[i] = zn;
    }

    for (auto el : wzor)
        cout << el.first << ": " << el.second << "\n";


    return 0;
}

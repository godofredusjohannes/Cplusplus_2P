#include <iostream>

using namespace std;

class Blok{
public:
    string mieszkania[10];
    Blok(string[]);
};

Blok::Blok(string mieszkania[]) {
    for (int i = 0; i < 10; ++i) {
    this -> mieszkania[0] = mieszkania[i];
    }
}

int main() {



    return 0;
}
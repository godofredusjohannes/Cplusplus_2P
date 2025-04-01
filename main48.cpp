#include <iostream>

using namespace std;

string Siemajestemcezar(string jawny){
    string szyfr;
    for (int i = 0; i < jawny.size(); ++i) {
        szyfr += jawny[i] + 3;
    }
    return szyfr;
}

int main() {
    cout << Siemajestemcezar("Aaaaaa") << endl;

    return 0;
}
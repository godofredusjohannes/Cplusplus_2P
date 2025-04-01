#include <iostream>

using namespace std;
/*
int suma(int a, int b){
    return a + b;
}

double suma(double a, double b){
    return a + b;
}

string suma(string a, string b){
    return a + b;
}
*/

template<class T, class T2>
T suma(T a, T2 b){
    return a + b;
}

template<class T1>
class Test{
public:
    T1 cos;
    T1 metoda(){}
};

int main() {

    int a = 10, b = 12;
    cout << suma(true, false);

    return 0;
}
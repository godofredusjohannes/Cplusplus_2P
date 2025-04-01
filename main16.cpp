#include <iostream>

using namespace std;

template <class T1, class T2>
T1 suma(T1, T2);

int main() {

   cout << suma(10, 1.232);

    return 0;
}

template <class T1, class T2>
T1 suma(T1 a, T2 b){
    return a + b;
}
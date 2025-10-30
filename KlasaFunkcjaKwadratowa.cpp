#include <iostream>


using namespace std;

class funkcja_kw {
    public:
    int a,b,c;

    int wartosc(int x){
        return a*x*x+b*x+c;
    }
    bool zero() {
        int delta = b*b - 4*a*c;
        if (delta >= 0) {
            return false;
        }
            return true;
    }
};



int main() {



    return 0;
}

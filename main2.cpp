#include <iostream>

using namespace std;

int main() {

    srand(time(nullptr));

    int liczba1, liczba2, liczba3, liczba4, liczba5, liczba6;

    liczba1 = rand()%49+1;
    liczba2 = rand()%49+1;
    liczba3 = rand()%49+1;
    liczba4 = rand()%49+1;
    liczba5 = rand()%49+1;
    liczba6 = rand()%49+1;

    if (liczba1 == liczba2 || liczba1 == liczba3 || liczba1 == liczba4 || liczba1 == liczba5 || liczba1 == liczba6 || liczba2 == liczba3 || liczba2 == liczba4 || liczba2 == liczba5 || liczba2 == liczba6 || liczba3 == liczba4 || liczba3 == liczba5 || liczba3 == liczba6 || liczba4 == liczba5 || liczba4 == liczba6 || liczba5 == liczba6){
        liczba1 = rand()%49+1;
        liczba2 = rand()%49+1;
        liczba3 = rand()%49+1;
        liczba4 = rand()%49+1;
        liczba5 = rand()%49+1;
        liczba6 = rand()%49+1;
    }
    else {

        cout << liczba1 << " " << liczba2 << " " << liczba3 << " " << liczba4 << " " << liczba5 << " " << liczba6;

    }
    return 0;
}

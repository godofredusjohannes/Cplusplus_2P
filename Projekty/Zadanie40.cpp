#include <iostream>

using namespace std;

int main() {

    int x;

    cout << "Podaj liczbe x:";
    cin >> x;
    cout << endl;

    if (x%2==0 && x%3==0){
        cout << "Liczba jest podzielna przez 6." << endl;
    }
    else if (x%2==0 && x%3!=0){
        cout << "Liczba jest podzielna przez 2, ale nie przez 3." << endl;
    }
    else if (x%2!=0 && x%3==0){
        cout << "Liczba jest podzielna przez 3, ale nie przez 2." << endl;
    }
    else{
        cout << "Liczba nie jest podzielna ani przez 2 ani przez 3." << endl;
    }

    return 0;
}
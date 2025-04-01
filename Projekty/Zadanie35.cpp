#include <iostream>

using namespace std;

void show_array(int t[], int n){
    for (int i = 0; i < n; ++i)
        cout << t[i] << " ";
    cout << endl;
}

int array_sum(int t[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += t[i];
    return suma;
}

int array_max(int t[], int n){
    int max;
    for (int i = 0; i < n; ++i) {
        if (max < t[i]){
            max = t[i];
        }
    }
    return max;
}

int array_min(int t[], int n){
    int min;
    for (int i = 0; i < n; ++i) {
        if (min > t[i]){
            min = t[i];
        }
    }
    return min;
}

int main() {

    int t[] {5, 3, 2, 6, 4, 3, 7, 4};
    cout << "Suma tabeli: " << array_sum(t, sizeof(t)/sizeof(int)) << endl;
    cout << "Najmniejsza liczba w tabeli: " << array_min(t, sizeof(t)/sizeof(int)) << endl;
    cout << "Najwieksza liczba w tabeli: " << array_max(t, sizeof(t)/sizeof(int)) << endl;

    return 0;
}
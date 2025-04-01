#include <iostream>

using namespace std;

void showArray(int t[], int n){
    for (int i = 0 ; i < n ; i++)
        cout << t[i] << " ";

}

int minValueArray(int t[], int n){
    int min = t[0];
    for (int i = 1; i < n; i++)
        if (min > t[i])
            min = t[i];
    return min;
}

int maxValueArray(int t[], int n){
    int max = t[0];
    for (int i = 1; i < n; i++)
        if (max < t[i])
            max = t[i];
    return max;
}

int silnia(int n){

    cout << "Podaj n: ";
    cin >> n;

    if (n == 0 || n == 1) return 1;

    long long silnia = 1;

    for (int i = n; i > 1; i--){
        silnia *= i;
    }
    return silnia;
}

int main() {

    int t[5] = {1, 2, 3, 4, 5};
    int n = sizeof(t)/sizeof(int);
    showArray(t, n);
    cout << endl;
    cout << "Najmniejsza liczba: " << minValueArray(t, n) << endl;
    cout << "Najwieksza liczba: " << maxValueArray(t, n) << endl;
    silnia(n);
    return 0;
}
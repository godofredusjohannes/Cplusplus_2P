#include <iostream>

using namespace std;

int min(int d[], int n, int j){
    int pmin = j;
    for(int i = j + 1; i < n; i++){
        if(d[i] < d[pmin]){
            pmin = i;
        }
    }
    return pmin;
}

void start(int d[], int n){
    for(int j = 0; j < n - 1; j++){
        int pmin = min(d, n, j);
        if (pmin != j){
            int temp = d[j];
            d[j] = d[pmin];
            d[pmin] = temp;
        }
    }
}

int main(){
    int d[] = {5, 2, 4, 8, 6, 1};
    int n = sizeof(d)/sizeof(d[0]);

    start(d, n);

    for(int i = 0; i < n; i++) cout << d[i] << " ";
    cout << endl;

    return 0;
}
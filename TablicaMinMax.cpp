#include <iostream>

using namespace std;

class MinMax{
public:
    int min;
    int max;
};

MinMax findMinMax(int tab[], int n){

    MinMax result;

    int i = 0;

    if (n % 2 == 0){
        result.min = min(tab[0], tab[1]);
        result.max = max(tab[0], tab[1]);
        i = 2;
    }
    else {
        result.min = result.max = tab[0];
        i = 1;
    }
    while (i < n - 1){
        int local_min = min(tab[i], tab[i + 1]);
        int local_max = max(tab[i], tab[i + 1]);
        result.min = min(result.min, local_min);
        result.max = min(result.max, local_max);
        i += 2;
    }
    cout << "Min: " << result.min << ", Max: " << result.max << endl;
    return result;
}



int main() {

    int tab[] = {5,7,3,8,2,1,4};

    int n = sizeof(tab) / sizeof(tab[0]);

    cout << endl;

    findMinMax(tab, n);

}

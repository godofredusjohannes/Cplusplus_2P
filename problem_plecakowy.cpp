#include <iostream>
#include <vector>

using namespace std;

void show(const vector <vector<double>> &p){
    int n = p[0].size();
    for (int i = 0; i < n; i++) {
        cout << "Waga: " << p[0][i] << ", Wartosc: " << p[1][i] << ", Waga/Wartosc: " << p[2][i] << endl;
    }
}

void sortuj(vector <vector<double>> &p){
    int n = p[0].size();
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++) {
            if (p[2][i] < p[2][i+1]) {
                swap(p[0][i], p[0][i+1]);
                swap(p[1][i], p[1][i+1]);
                swap(p[2][i], p[2][i+1]);
            }
        }
    }
}

void pakujPlecak(vector<int> waga, vector<double> wartosc){

    vector <vector<double>> produkty(3);
    int n = waga.size();
    for (int i = 0; i < n; ++i) {
        produkty[0].push_back((double) waga[i]);
        produkty[1].push_back(wartosc[i]);
        produkty[2].push_back(wartosc[i]/ (double) waga[i]);
    }
    show(produkty);
}

int main() {

    vector <int> waga {5, 2, 6, 9, 1};
    vector <double> wartosc {6.12, 1.34, 7.11, 8.56, 0.56};
    pakujPlecak(waga, wartosc);

    return 0;
}

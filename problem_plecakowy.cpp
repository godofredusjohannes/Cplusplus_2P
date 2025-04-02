#include <iostream>
#include <vector>

using namespace std;

void show(const vector <vector<double>> &p){
    int n = p[0].size();
    for (int i = 0; i < n; i++) {
        cout << "Produkt: " << i+1 << ", Ilosc: " << p[3][i] << ", [Waga: " << p[0][i] << ", Wartosc: " << p[1][i] << ", Waga/Wartosc: " << p[2][i] << "]" << endl;
    }
}

void sortuj(vector <vector<double>> &p){
    int n = p[0].size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (p[2][j] < p[2][j+1]) {
                swap(p[0][j], p[0][j+1]);
                swap(p[1][j], p[1][j+1]);
                swap(p[2][j], p[2][j+1]);
                swap(p[3][j], p[3][j+1]);
            }
        }
    }
}

void pakujPlecak(vector<int> waga, vector<double> wartosc) {
    const int LIMIT_WAGI = 15;
    vector <vector<double>> produkty(4);
    int n = waga.size();

    for (int i = 0; i < n; ++i) {
        produkty[0].push_back((double) waga[i]);
        produkty[1].push_back(wartosc[i]);
        produkty[2].push_back(wartosc[i] / (double) waga[i]);
        produkty[3].push_back(0);
    }

    sortuj(produkty);

    double current_weight = 0;
    for (int i = 0; i < n && current_weight < LIMIT_WAGI; ++i) {
        int max_quantity = (LIMIT_WAGI - current_weight) / produkty[0][i];
        int quantity = min(1, max_quantity);
        produkty[3][i] = quantity;
        current_weight += produkty[0][i] * quantity;
    }

    show(produkty);
}

int main() {
    vector <int> waga {5, 2, 6, 9, 1};
    vector <double> wartosc {6.12, 1.34, 7.11, 8.56, 0.56};

    pakujPlecak(waga, wartosc);

    return 0;
}
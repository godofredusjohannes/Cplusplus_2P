#include <iostream>

using namespace std;

string addData() {

    string imie, nazwisko;

    cout << "Podaj imie: ";
    cin >> imie;
    cout << "\nPodaj nazwisko: ";
    cin >> nazwisko;


    return imie + " " + nazwisko;
}

string changeData (string data){
    bool isSpace = false;
    string imie, nazwisko;
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == ' ')
            isSpace = true;
        if (!isSpace)
            imie += data[i];
        else
            nazwisko += data[i];
    }
    return nazwisko + " " + imie;
}

int main() {
    cout << changeData(addData());
    return 0;
}
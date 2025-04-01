#include <iostream>

using namespace std;

int main() {

    float m, msquared, kg, bmi;

    cout << "Podaj swoj wzrost w metrach: ";
    cin >> m;
    msquared = m * m;
    cout << "\nPodaj swoja wage: ";
    cin >> kg;
    bmi = kg / msquared;
    cout << "\nTwoje BMI wynosi: " << bmi << endl;
    if (bmi<18.5)
        cout << "\nJestes za chudy." << endl;
    else if (bmi>25)
        cout << "\nJestes za gruby." << endl;
    else
        cout << "\nJestes prawidlowej wagi." << endl;
    return 0;
}

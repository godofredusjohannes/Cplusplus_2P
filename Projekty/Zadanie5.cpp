#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj dwie liczby a i b: " << endl;
    cin >> a;
    cin >> b;
    if (a > b)
        cout << "- Liczba a jest wieksza od b" << endl;
    if (a < b)
        cout << "- Liczba a jest mniejsza od b" << endl;
    if (a != b)
        cout << "- Liczba a jest rozna od b" << endl;
    if (a == b)
        cout << "- Liczba a jest rowna b" << endl;

    return 0;
}

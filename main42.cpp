#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char *tekst = new char();
    string burger2;
    getline(cin, burger2);
    for (int i = 0; i < strlen(tekst); ++i) {
        tekst[i] = burger2[i];
        if (strstr(tekst,"Ala")){
         cout << "Znaleziono zaginiona Ale" << endl;
         cout << burger2;
        }
    }
    cout << burger2;

    return 0;
}
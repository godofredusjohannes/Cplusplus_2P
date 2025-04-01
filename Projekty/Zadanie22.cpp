#include <iostream>

using namespace std;

int main() {

    int pkt;

    cout << "Wpisz swoje punkty z testu: ";
    cin >> pkt;
    cout << endl;

    if (pkt>=0 && pkt<=39){

        cout << "Dostales ocene niedostateczna." << endl;

    }
    else if (pkt>=40 && pkt<=54){

        cout << "Dostales ocene dopuszczajaca." << endl;

    }
    else if (pkt>=55 && pkt<=69){

        cout << "Dostales ocene dostateczna." << endl;

    }
    else if (pkt>=70 && pkt<=84){

        cout << "Dostales ocene dobra." << endl;

    }
    else if (pkt>=85 && pkt<=98){

        cout << "Dostales ocene bardzo dobra." << endl;

    }
    else if (pkt>=99 && pkt<=100){

        cout << "Dostales ocene celujaca." << endl;

    }

    return 0;
}
#include <iostream>
#include <fstream>


using namespace std;

// ZAPIS
char addUser(char nazwa_uzytkownika){
    ofstream file("users.txt", ios::app);

    if (file){
        file << nazwa_uzytkownika;
    }
    else
        cout << "Nie moge zapisac do pliku \n";

    return 0;
}

// ODCZYT:
char displayUsers(){
    ifstream file("users.txt");
    if (file) {
        string linia;
        while (file.eof()) {
            getline(file, linia);
            cout << linia;
        }
    }
    else{
        cout << "\n Nie mozna otworzyc pliku \n";
    }
    /* Slowo po slowie
        if (file) {
        string slowo;
        while(file.eof()) {
            file >> slowo
            cout << slowo << " ";
        }*/
    /* Znak po znaku
    while(!file.eof()) {
        char zn = file.get();
        cout << zn;
    }*/
    return 0;
}

int main() {

    char nazwa_uzytkownika;
    int opcja;

    cout << "Program dziala w sposob: \nID Imie Wiek" << endl << endl;

    cout << "1. Dodaj uzytkownika" << endl;
    cout << "2. Wyswietl uzytkownikow" << endl;
    cout << "3. Wyjscie" << endl << endl;

    cout << "Wybierz opcje: ";
    cin >> opcja;

    switch (opcja) {
        case 1: cout << "Wpisz po kolei ID Nazwe uzytkownika i Wiek: ";
        cin >> nazwa_uzytkownika;
            addUser(nazwa_uzytkownika);
            cout << "Dodano pomyslnie";
            break;
        case 2: cout << displayUsers();
        break;
        case 3: cout << "Program zakonczony.";
            break;
        default: cout << "Podales niepoprawna opcje";
            break;
    }

    return 0;
}
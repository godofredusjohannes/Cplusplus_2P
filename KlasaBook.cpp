#include <iostream>

using namespace std;

class Book {
public:
    string title, author;
    int year;

    Book(string, string, int);
};

Book::Book(string title, string author, int year) {
    this->title = title;
    this->author = author;
    this->year = year;
}

void printBookInfo(Book &b) {
    cout << "Title: " << b.title << "\nAuthor: " << b.author << "\nYear: " << b.year << endl << endl;
}


int main() {

    Book lewicki("Golona na silowni","Mikolaj Lewajecki", 1999);
    Book kocur("Born of ass raped by fate","Jakub Kamil Kocur", 2024);

    printBookInfo(kocur);

    printBookInfo(lewicki);

    return 0;
}
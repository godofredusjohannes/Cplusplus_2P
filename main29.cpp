#include <iostream>

using namespace std;

class Lista{
public:
    Lista *next, *prev;
    int data;
};

int main() {

    Lista ob1;
    ob1.data = 1;
    Lista ob2;
    ob2.data = 2;
    Lista ob3;
    ob3.data = 3;
    Lista ob4;
    ob4.data = 4;
    Lista ob5;
    ob5.data = 5;

    ob1.next = &ob2;
    ob1.prev = &ob5;
    ob2.next = &ob3;
    ob2.prev = &ob1;
    ob3.next = &ob4;
    ob3.prev = &ob2;
    ob4.next = &ob5;
    ob4.prev = &ob3;
    ob5.next = &ob1;
    ob5.prev = &ob4;

    Lista *wsk;
    wsk = &ob1;

    cout << wsk -> data << endl;
    cout << wsk -> next -> data << endl;
    cout << wsk -> next -> next -> data << endl;
    cout << wsk -> next -> next -> next -> data << endl;
    cout << wsk -> next -> next -> next -> next -> data << endl;

    return 0;
}
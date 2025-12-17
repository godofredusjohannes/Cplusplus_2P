#include <iostream>

using namespace std;

class Student {
    public:
    string name;
    int age;
    Student(string, int);
    Student(Student&);
    void studentInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

Student::Student(string name, int age) : name(name), age(age) {}

Student::Student(Student &a) {
    name = a.name;
    age = a.age;
    cout << "Wywolano konstruktor kopiujacy." << endl;
}

int main() {

    Student s1("Piotrus", 15);
    s1.studentInfo();

    Student s2(s1);
    s2.studentInfo();

    return 0;
}
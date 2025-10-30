#include <iostream>

    using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal();
    ~Animal();
    void introduce();
    void setImie(string imie) {this->name = name;}
    void setAge(int age){this->age = age;}
};

Animal::Animal() {
    name = "Nieznane zwierze";
    age = 0;
    cout << "Zwierze sie narodzilo" << endl;
}

Animal::~Animal() {
    cout << "Zwierze " << name << " umiera w wieku " << age << " lat." << endl;
}

void Animal::introduce() {
        cout << "Jestem " << name << " i mam " << age << " lat." << endl;
}

void setAnimal(Animal &zw) {
    string imie;
    int age;
    cout << "Podaj imie zwierzecia: ";
    cin >> imie;
    cout << "Podaj wiek zwierzecia: ";
    cin >> age;
    zw.setImie(imie);
    zw.setAge(age);
}

int main() {

    Animal zoo[3] = {
        setAnimal(zoo[0]);
        setAnimal(zoo[1]);
        setAnimal(zoo[2]);
    };

    for (int i = 0; i < 3; i++) {
        zoo[i].introduce();
    }

    return 0;
}
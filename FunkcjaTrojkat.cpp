#include <iostream>

using namespace std;

class Trojkat {
  public:
    double wysokosc;
    double podstawa;

    void wczytaj();
    double pole(){
    return 0.5 * (podstawa * wysokosc);
    };
};

void Trojkat::wczytaj() {
  cout << "Podaj wysokosc: ";
  cin >> this->wysokosc;
  cout << "Podaj podstawa: ";
  cin >> this->podstawa;
  cout << "Podstawa: " << podstawa << " " << "Wyskosc: " << wysokosc << endl;
}

void porownaj(Trojkat t1, Trojkat t2) {
  if (t1.pole() > t2.pole()) {
    cout << "Podstawa: " << t1.podstawa << " Wysokosc: " << t1.wysokosc << endl;
  }
  if (t2.pole() > t1.pole()) {
    cout << "Podstawa: " << t2.podstawa << " Wysokosc: " << t2.wysokosc << endl;
  }
  else{
    cout << "Trojkaty sa rowne";
    }
}

int main() {

  Trojkat kaktus6;

  Trojkat kaktus5;

  kaktus6.wczytaj();

  cout << "Pole: " << kaktus6.pole() << endl;

  kaktus5.wczytaj();

  cout << "Pole: " << kaktus5.pole() << endl;

  porownaj(kaktus6, kaktus5);

    return 0;
}

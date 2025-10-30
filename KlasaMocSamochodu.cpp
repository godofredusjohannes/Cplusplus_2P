#include <iostream>

using namespace std;

class MocSamochodu {
    public:
      int moc;
      const double kW = 1.36;
      const double KM = 0.74;

      MocSamochodu (){
        cout << "Podaj moc: ";
        cin >> moc;
        cout << endl;
      }

      static inline double przeliczenieMocyNaKM(MocSamochodu &a){
          return a.moc * a.KM;
      }
      static inline double przeliczenieMocyNakW(MocSamochodu &a){
          return a.moc * a.kW;
      }
};

class Uczen{
  public:
    string imie, nazwisko;
    int rok_urodzenia;
    string klasa;
    int grupa;

    Uczen(){

  };

int main() {

  MocSamochodu m1;

  cout << m1.moc << endl;
  cout << m1.przeliczenieMocyNaKM(m1) << endl;
  cout << m1.przeliczenieMocyNakW(m1) << endl;

    return 0;
}
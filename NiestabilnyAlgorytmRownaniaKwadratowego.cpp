#include <iostream>

using namespace std;


void rownanie(int a, int b, int c) {
  if (a == 0){
  cout << "To nie jest rownanie kwadratowe" << endl;
  }
  else {
    int delta = b * b - 4 * a * c;

    if (delta < 0) {
      cout << "Rownanie nie ma pierwiastkow" << endl;
    }
    else {
      int x1 = (-b - sqrt(delta)) / (2 * a);
      int x2 = (-b + sqrt(delta)) / (2 * a);
      cout << x1 << endl << x2 << endl;
    }
  }
}


int main() {

  int a,b,c;

  cout << "Podaj liczbe a:" << endl;
  cin >> a;
  cout << "Podaj liczbe b:" << endl;
  cin >> b;
  cout << "Podaj liczbe c:" << endl;
  cin >> c;

  rownanie(a,b,c);

    return 0;
}

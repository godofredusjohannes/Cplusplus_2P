#include <iostream>

using namespace std;

int licznik = 0;

int przestaw(int n){

  int w;

  int r = n % 100;
  int a = r / 10;
  int b = r % 10;
  n = n / 100;


  licznik += 1;

  if (n > 0){
    w = a + 10 * b + 100 * przestaw(n);
  }
  else if (a > 0){
    w = a + 10 * b;
  }
  else{
    w = b;
  }
  return w;
}

int main() {

  int n1 = 316498;

  cout << "n1 = " << n1 << " wynik dzialania = " << przestaw(n1) << " licznik = " << licznik << endl;

  licznik = 0;

  int n2 = 43657688;

  cout << "n2 = " << n2 << " wynik dzialania = " << przestaw(n2) << " licznik = " << licznik << endl;

  licznik = 0;

  int n3 = 154005710;

  cout << "n3 = " << n3 << " wynik dzialania = " << przestaw(n3) << " licznik = " << licznik << endl;

  licznik = 0;

  long int n4 = 998877665544321;

  cout << "n4 = " << n4 << " wynik dzialania = " << przestaw(n4) << " licznik = " << licznik << endl;

    return 0;
}

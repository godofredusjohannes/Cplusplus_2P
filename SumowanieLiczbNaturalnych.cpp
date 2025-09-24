#include <iostream>

using namespace std;

int sumuj(int n){
int suma = 0;
int liczba = n;

  for (int i = 1; i <= n; i++){
    while (liczba > 0){
  suma = suma + liczba;
  liczba = liczba - 1;
    }
    if (liczba == 0){
      return suma;
      }
    }
  }


int main() {

  int n;

  cout << "Podaj n: ";
  cin >> n;
  cout << endl;

  cout << sumuj(n);

    return 0;
}

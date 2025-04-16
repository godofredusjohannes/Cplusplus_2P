#include <iostream>

using namespace std;

void szukanie(int tab[], int p, int x){
  int l = 0;

  if(x > p || x < l){
    cout << "Liczby " << x << " nie ma w tablicy" << endl;
  }
  else{
  while(l < p){
    int sr = (l+p)/2;
    if (x == sr){
      cout << "Liczba " << sr << " jest w tablicy" << endl;
      break;
  }
  else
      if (x > sr){
    l = sr+1;
  }
  else{
    p = sr - 1;
  }
}
}
}

int main() {

  int tab[]{1,2,3,4,5,6,7,8,9};
  int p = sizeof(tab)/sizeof(int) - 1;

  int x;

  cout << "Wpisz liczbe ktora chcesz znalezc w tablicy: ";
  cin >> x;
  cout << endl;

  szukanie(tab, p, x);

}

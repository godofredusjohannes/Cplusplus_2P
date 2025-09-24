#include <iostream>

using namespace std;

void wartownik(){

    int n = 5;
    int x = 1;
    int i = 1;
    int a[] = {7,2,6,8,1};
    a[n+1]=x;

    for(int j=0;j<n;j++){
      cout<<a[j]<<" ";
    }

    while (a[i]!= x) {
        i++;
    }
    if (i==n+1){
        cout << "Nie odnaleziono elementu x"<<endl;
    }
    else{
        cout << "Odnaleziono element x pod indeksem " << i<<endl;
    }

}

int main() {

  wartownik();

    return 0;
}

#include <iostream>

using namespace std;

int partition(int tab[], int left, int right){
  int pivot = tab[right];
  int i = left - 1;
  for (int j = left; j < right; j++){
    if (tab[j] <= pivot){
      i++;
      swap(tab[i], tab[j]);
    }
  }
  swap(tab[i + 1], tab[right]);
  return i + 1;
}

void quickSort(int tab[], int left, int right){
  if (left < right){
    int pivotIndex = partition(tab, left, right);
    quickSort(tab, left, pivotIndex - 1);
    quickSort(tab, pivotIndex + 1, right);
  }
}


int main() {

  int tab[] = {3,7,1,2,6,2,4};

  quickSort(tab, 0, 7);

  for (int i = 0; i < 6; i++){
    cout << tab[i] << " ";
  }

    return 0;
}

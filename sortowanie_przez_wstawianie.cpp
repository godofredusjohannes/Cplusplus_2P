#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector <int> vec){
  vector<int> tab;
  tab.push_back(vec[0]);
  for (int i = 1; i < vec.size(); i++){
  bool czyDodano = false;
    for (int j = 0; j < tab.size(); j++){
      if (vec[i] <= tab[j]){
        if (j == 0){
          tab.insert(tab.begin(), vec[i]);
        }
        else{
          tab.insert(tab.begin() + j, vec[i]);
        czyDodano = true;
        break;
        }
      }
    }
    if(!czyDodano){
      tab.push_back(vec[i]);
      czyDodano = false;
    }
  }
  return tab;
}

int main() {

  vector<int> a = {3,2,8,1,7,4};
  for (int el : sort(a)){
       cout << el << " ";
       }
    return 0;
}

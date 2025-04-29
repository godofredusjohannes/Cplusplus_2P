#include <iostream>
#include <vector>

using namespace std;

vector<int> czyJestLitera(string haslo, char litera){
  vector<int> vec;
  for (int i = 0; i < haslo.length(); i++){
    if (litera == haslo[i]){
      vec.push_back(i);
    }
  }
  return vec;
}

void rysujWisielca(int proba){
  switch (proba){
    case 1:
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "/\\\n" << endl;
      break;
    case 2:
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "\n";
      cout << "/\\\n" << endl;
      break;
    case 3:
      cout << "\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "/\\\n" << endl;
      break;
    case 4:
      cout << "-------------\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "|\n";
      cout << "/\\\n" << endl;
      break;
    case 5:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "/\\\n" << endl;
      break;
    case 6:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|          ( )\n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "/\\\n" << endl;
      break;
    case 7:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|          ( )\n";
      cout << "|           |\n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "/\\\n" << endl;
      break;
    case 8:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|          ( )\n";
      cout << "|         --|--\n";
      cout << "|            \n";
      cout << "|            \n";
      cout << "/\\\n" << endl;
      break;
    case 9:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|          ( )\n";
      cout << "|         --|--\n";
      cout << "|           |\n";
      cout << "|            \n";
      cout << "/\\\n" << endl;
      break;
    case 10:
      cout << "-------------\n";
      cout << "|           |\n";
      cout << "|          ( )\n";
      cout << "|         --|--\n";
      cout << "|           |\n";
      cout << "|          / \n";
      cout << "/\\ \n" << endl;
      break;
    case 11:
      cout << "-------------  \n";
      cout << "|           |  \n";
      cout << "|  Game    ( ) \n";
      cout << "|  Over   --|--\n";
      cout << "|           |  \n";
      cout << "|          / \\ \n";
      cout << "/\\             \n" << endl;
      break;
  }
  }

void gra(string haslo){
    string zaszyfrowane;
    for (int i = 0; i < haslo.length(); i++){
      zaszyfrowane += '*';
    }
    char litera;
    int ilProb = 0;
    while (ilProb < 11 || czyJestLitera(zaszyfrowane, '*').empty()){
      cout << zaszyfrowane << endl;
      cout << "Podaj litere: ";
      cin >> litera;
      if (!czyJestLitera(haslo, litera).empty()){
        for (int el : czyJestLitera(haslo, litera)){
        zaszyfrowane[el] = litera;
        }
      }
      else{
        ilProb++;
        rysujWisielca(ilProb);
      }
    }
}

int main() {
  string haslo = "mechanik";
  gra(haslo);
    return 0;
}

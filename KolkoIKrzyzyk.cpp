#include <iostream>

using namespace std;

void startGame(int board[][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      board[i][j] = 0;
    }
  }
}

void showBoard(int board[][3]){
  int num = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      num++;
      if(board[i][j] == 0){
        cout << "[" << num << "]";
      }
      else if(board[i][j] == 1){
        cout << "[X]";
      }
      else{
      cout << "[O]";
      }
    }
    cout << endl;
  }
  cout << "\n--------------------\n" << endl;
}

// Jezeli player = p (Czlowiek), player = c (Komputer)
void movePlayer(int board[][3], char player){
  int field = 0, num;
  while(field == 0){
    num = 0;
    showBoard(board);
    if (player == 'p'){
      cout << "Podaj nr pola: ";
      cin >> field;
    }
    else{
      field = rand() % 9 + 1;
      }
    if(field < 1 || field > 9){
    field = 0;
    continue;
    }
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          num++;
          if(num == field){
            if (board[i][j] == 0){
              board[i][j] = (player == 'p') ? 1 : -1;
            }
            else {
              cout << "\nPole jest juz zajete\n";
              i = j = 3;
              field = 0;
            }
          }
        }
      }
  }
}

bool isEndGame(int board[][3]){
      switch (diagonalWinner(board)){
        case 'p':
          cout << "\nWygral gracz\n";
        return true;
        case 'c':
          cout << "\nWygral komputer\n";
        return true;
      };
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(board[i][j] == 0){
        return false;
      }
      else {
        return true;
      }
    }
  }
}
char diagonalWinner(int board[][3]){
  if(board[0][0] + board[1][1] + board[2][2] == 3 || board[2][0] + board[1][1] + board[0][2] == 3){
      return 'p';
  }
  if (board[0][0] + board[1][1] + board[2][2] == -3 || board[2][0] + board[1][1] + board[0][2] == -3){
    return 'c';
  }
}

int main() {
  srand(time(nullptr));
  int board[3][3];
  startGame(board);
  bool isPlayer = true;

  while(!isEndGame(board)){
  movePlayer(board, isPlayer ? 'p' : 'c');
  isPlayer = !isPlayer;
  showBoard(board);
  }

    return 0;
}

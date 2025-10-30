#include <iostream>

using namespace std;

class Player{
  int exp;
  int level;
public:
    string name;
    int ranking;
    Player(int, int, string, int);
    Player(int, int);
};

Player::Player(int exp,int level,string name,int ranking){
  this-> exp = exp;
  this-> level = level;
  this->name = name;
  this->ranking = ranking;
}

Player::Player(int, int): exp(exp),level(level){}

int main() {



    return 0;
}
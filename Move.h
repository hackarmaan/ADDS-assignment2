#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
class Move {
 protected:
  std::vector<std::string> defeat;
  std::string name;

 public:
    std::string getName();
    bool checkWinner(Move* moveOne);
    
};
#endif
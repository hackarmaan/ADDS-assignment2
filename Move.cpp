#include "Move.h"
std::string Move::getName() { return name; }
bool Move::checkWinner(Move* moveOne) {
  for (int i = 0; i < defeat.size(); i++) {
    if (defeat.at(i) == moveOne->getName()) {
      return true;
    }
  }
  return false;
}

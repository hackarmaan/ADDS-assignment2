#include "Move.h"
#include "MoveType.h"
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player {
 private:
  MoveType moveT;

 public:
  Human();
  Human(std::string);
  Move* makeMove() override;
};
#endif
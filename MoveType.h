#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#ifndef MOVETYPE_H
#define MOVETYPE_H
class MoveType {
    public:
    Move* getMove(std::string move);

};
#endif


#include <string>
#include "Move.h"
#ifndef PLAYER_H
#define PLAYER_H

class Player{
    protected:
    std::string name;
    public :
    virtual Move* makeMove() = 0;
    std::string getName();
};
#endif
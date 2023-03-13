#include "Referee.h"
#include "Move.h"

Player* Referee::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    if (move1->getName() == move2->getName()){
        return nullptr;
    }
    else if (move2->checkWinner(move1)){
        return player2;
    }
    else {
        return player1;
    }

}
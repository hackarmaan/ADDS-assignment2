#include <iostream>
#include <string>
#include <vector>
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
int main(){
    Player* playerOne = new Human("a");
    Player* playerTwo = new Computer();
    std::vector<std::string> results;
    Referee* ref = new Referee();
    for (int i = 0; i < 1; i ++){
        Player* winner = ref->refGame(playerOne, playerTwo);
        if (winner == nullptr){
            results.push_back("Tie");

        }
        else{
            results.push_back(winner->getName());
        }
        for (int i = 0; i < results.size(); i ++){
            std::cout << results[i] << std::endl; 

        }
        return 0;
    }
}
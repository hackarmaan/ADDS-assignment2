#include "Human.h"
#include <iostream>
Human::Human (){
    name = "Human";
}
Human::Human (std::string temp){
    name = temp;
}
Move* Human::makeMove(){
    std::string move;
    std::cout << "Enter move: ";
    std::cin >> move;
    Move* m = moveT.getMove(move);
    return m;

}
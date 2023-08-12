#include "Referee.h"
#include <iostream>

Referee::Referee(){};
Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* p1 = player1->makeMove();
    Move* p2 = player2->makeMove();

    int p1Win = p1->winCheck(p2->getName());

    if (p1Win == 0)
    {
        std::cout << player1->getName() << " Wins!" << std::endl;
    } else if (p1Win == 1)
    {
        std::cout << player2->getName() << " Wins!" << std::endl;
    } else if (p1Win == 2)
    {
        std::cout <<  "It's a Tie!" << std::endl;
    } else if (p1Win == 3)
    {
        std::cout << "Moves not applicable, play again." << std::endl;
    }


    return nullptr;
}
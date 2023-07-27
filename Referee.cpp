#include "Referee.h"
#include <iostream>

Referee::Referee(){};
Player* Referee::refGame(Player* player1, Player* player2)
{
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();

    if ((p1 == 'P') && (p2 == 'P'))
    {
        std::cout << "It's a Tie." << std::endl;
        return nullptr;
    } else if ((p1 == 'P') && (p2 == 'R'))
    {
        std::cout << player1->getName() << " Wins." << std::endl;
        return player1;
    } else if ((p1 == 'P') && (p2 == 'S'))
    {
        std::cout << player2->getName() << " Wins." << std::endl;
        return player2;
    } else if ((p1 == 'R') && (p2 == 'P'))
    {
        std::cout << player2->getName() << " Wins." << std::endl;
        return player2;
    } else if ((p1 == 'R') && (p2 == 'R'))
    {
        std::cout << "It's a Tie." << std::endl;
        return nullptr;
    } else if ((p1 == 'R') && (p2 == 'S'))
    {
        std::cout << player1->getName() << " Wins." << std::endl;
        return player1;
    } else if ((p1 == 'S') && (p2 == 'P'))
    {
        std::cout << player1->getName() << " Wins." << std::endl;
        return player1;
    } else if ((p1 == 'S') && (p2 == 'R'))
    {
        std::cout << player2->getName() << " Wins." << std::endl;
        return player2;
    } else if ((p1 == 'S') && (p2 == 'S'))
    {
        std::cout << "It's a Tie." << std::endl;
        return nullptr;
    }

    return nullptr;
}
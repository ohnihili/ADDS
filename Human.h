#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player
{
    public:
        Human();
        Human(std::string name);
        Move* makeMove();
        std::string getName();
};


#endif // HUMAN_H

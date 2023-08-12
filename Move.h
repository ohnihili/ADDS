#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>

class Move 
{
    public:
        std::string name;
        std::string getName();
        virtual int winCheck(std::string move) = 0;
};

#endif // MOVE_H

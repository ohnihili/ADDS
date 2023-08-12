#include "Computer.h"
#include "Rock.h"
#include <string>

Computer::Computer()
{
    name = "Computer";
};
Move* Computer::makeMove()
{
    Move* move = new Rock;
    return move;
};
std::string Computer::getName()
{
    return name;
};
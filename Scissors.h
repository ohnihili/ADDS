#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move
{
    public:
        int winCheck(std::string opposition);
        Scissors();
};


#endif // SCISSORS_H

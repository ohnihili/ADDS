#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move
{
    public:
        int winCheck(std::string opposition);
        Rock();
};

#endif // ROCK_H

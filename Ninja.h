#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move
{
    public:
        int winCheck(std::string opposition);
        Ninja();
};

#endif // NINJA_H

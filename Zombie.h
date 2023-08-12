#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move
{
    public:
        int winCheck(std::string opposition);
        Zombie();
};


#endif // ZOMBIE_H

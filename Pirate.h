#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move
{
    public:
        int winCheck(std::string opposition);
        Pirate();
};


#endif // PIRATE_H

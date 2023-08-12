#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move
{
    public:
        int winCheck(std::string opposition);
        Monkey();
};

#endif // MONKEY_H

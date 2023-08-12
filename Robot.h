#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move
{
    public:
        int winCheck(std::string opposition);
        Robot();
};


#endif // ROBOT_H

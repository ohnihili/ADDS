#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper : public Move
{
    public:
        int winCheck(std::string opposition);
        Paper();
};



#endif // PAPER_H

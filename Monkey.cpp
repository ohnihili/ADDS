#include "Monkey.h"

Monkey::Monkey()
{
    name = "Monkey";
}

int Monkey::winCheck(std::string opposition)
{
    if ((opposition == "Ninja") || (opposition == "Robot"))
    {
        return 0;
    } else if((opposition == "Pirate") || (opposition == "Zombie"))
    {
        return 1;
    } else if(opposition == "Monkey")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
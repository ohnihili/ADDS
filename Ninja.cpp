#include "Ninja.h"

Ninja::Ninja()
{
    name = "Ninja";
}

int Ninja::winCheck(std::string opposition)
{
    if ((opposition == "Pirate") || (opposition == "Zombie"))
    {
        return 0;
    } else if((opposition == "Robot") || (opposition == "Monkey"))
    {
        return 1;
    } else if(opposition == "Ninja")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
#include "Zombie.h"

Zombie::Zombie()
{
    name = "Zombie";
}

int Zombie::winCheck(std::string opposition)
{
    if ((opposition == "Pirate") || (opposition == "Monkey"))
    {
        return 0;
    } else if((opposition == "Ninja") || (opposition == "Robot"))
    {
        return 1;
    } else if(opposition == "Zombie")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;
}
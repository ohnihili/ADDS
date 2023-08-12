#include "Pirate.h"

Pirate::Pirate()
{
    name = "Pirate";
}

int Pirate::winCheck(std::string opposition)
{
    if ((opposition == "Robot") || (opposition == "Monkey"))
    {
        return 0;
    } else if((opposition == "Ninja") || (opposition == "Zombie"))
    {
        return 1;
    } else if(opposition == "Pirate")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
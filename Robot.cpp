#include "Robot.h"

Robot::Robot()
{
    name = "Robot";
}

int Robot::winCheck(std::string opposition)
{
    if ((opposition == "Ninja") || (opposition == "Zombie"))
    {
        return 0;
    } else if((opposition == "Pirate") || (opposition == "Monkey"))
    {
        return 1;
    } else if(opposition == "Robot")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
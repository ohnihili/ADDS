#include "Rock.h"
Rock::Rock()
{
    name = "Rock";
};

int Rock::winCheck(std::string opposition)
{
    if (opposition == "Scissors")
    {
        return 0;
    } else if(opposition == "Paper")
    {
        return 1;
    } else if(opposition == "Rock")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
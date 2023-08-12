#include "Paper.h"

Paper::Paper()
{
    name = "Paper";
}

int Paper::winCheck(std::string opposition)
{
    if (opposition == "Rock")
    {
        return 0;
    } else if(opposition == "Scissors")
    {
        return 1;
    } else if(opposition == "Paper")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
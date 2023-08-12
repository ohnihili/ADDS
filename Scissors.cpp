#include "Scissors.h"
Scissors::Scissors()
{
    name = "Scissors";
}

int Scissors::winCheck(std::string opposition)
{
    if (opposition == "Paper")
    {
        return 0;
    } else if(opposition == "Rock")
    {
        return 1;
    } else if(opposition == "Scissors")
    {
        return 2;
    } else 
    {
        return 3;
    }

    return 0;

}
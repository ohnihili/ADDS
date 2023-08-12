#include <iostream>
#include "Human.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

Human::Human()
{
    name = "Human";
};
Human::Human(std::string name)
{
    this->name = name;
};

std::string Human::getName()
{
    return name;
};

Move* Human::makeMove()
{
    std::string moveName;
    std::cout << "Enter move: ";
    std::cin >> moveName;

    while ((moveName.compare("Rock") != 0) && (moveName.compare("Paper") != 0)
     && (moveName.compare("Scissors") != 0) && (moveName.compare("Ninja") != 0)
     && (moveName.compare("Pirate") != 0) && (moveName.compare("Zombie") != 0)
     && (moveName.compare("Robot") != 0) && (moveName.compare("Monkey") != 0) )
    {
        std::cout << "Incorrect Input" << std::endl << "Enter move: ";
        std::cin >> moveName;     
          
    };

    if (moveName == "Rock")
    {
        Move* move = new Rock;
        return move;
    } else if (moveName == "Scissors")
    {
        Move* move = new Scissors;
        return move;
    } else if (moveName == "Paper")
    {
        Move* move = new Paper;
        return move;
    } else if (moveName == "Monkey")
    {
        Move* move = new Monkey;
        return move;
    } else if (moveName == "Pirate")
    {
        Move* move = new Pirate;
        return move;
    } else if (moveName == "Robot")
    {
        Move* move = new Robot;
        return move;
    } else if (moveName == "Zombie")
    {
        Move* move = new Zombie;
        return move;
    } else if (moveName == "Ninja")
    {
        Move* move = new Ninja;
        return move;
    }

    return nullptr;
};
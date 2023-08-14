#include "Reverser.h"


int Reverser::reverseDigit(int value)
{
    if (value < 0)
    {
        return -1;
    } else if (value == 0)
    {
        return value;
    } 
        int power = log10(value);

        return (value % 10)*pow(10, power) + reverseDigit(value/10);

}

std::string Reverser::reverseString(std::string characters)
{
    if (characters.empty())
    {
        return characters;
    }
    return characters[characters.size() - 1] + reverseString(characters.substr(0, characters.size() - 1));
}
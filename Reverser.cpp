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

    
    return "NA";
}
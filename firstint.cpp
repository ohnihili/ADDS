#include <string>
#include <iostream>

int firstInt(std::string str)
{
    if (str.empty() == 1)
    {
        return 0;
    }
    if (isdigit(str[0]))
    {
        std::cout << str[0] << std::endl;
        return 0;
    }

    firstInt(str.erase(str.front()));

    return 0;
}

int main() 
{
    firstInt("Hello2World");
}
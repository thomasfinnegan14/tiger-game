#include "Card.h"

// printCard function which returns a string
std::string Card::printCard()
{
    //temporary strings
    std::string c;
    std::string r;

    if (color == Card::purple)
    {
        c = "purple";
    }
    else
    {
        c = "orange";
    }

    // set rank to string
    r = std::to_string(rank);

    return c + ":" + r;
}

// getRank getter
int Card::getRank()
{
    return rank;
}

// getColor getter
Card::Color Card::getColor()
{
    return color;
}

// getValue getter
int Card::getValue()
{
    return value;
}
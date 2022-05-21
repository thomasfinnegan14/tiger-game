#include "Hand.h"

// function to show human their hand
std::string Hand::printHand()
{
    // declare stringstream
    std::stringstream ss;

    for (unsigned int i = 0; i < hand.size(); i++)
    {
        ss << "[" << i+1 << "] " << hand[i].printCard();
        if (i < hand.size()-1)
        {
            ss << " ";
        }
    }

    // return stringstream as string
    return ss.str();
}

// function to let human deal a card
Card Hand::dealCard(int num)
{
    Card temp = hand[num-1];
    hand.erase (hand.begin()+(num-1));
    return temp;
}

// function to get current number of cards in hand
int Hand::getHandSize()
{
    return hand.size();
}
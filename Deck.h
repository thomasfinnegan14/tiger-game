#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Card.h"

class Deck
{
    private:
        // private vector of type Card
        std::vector<Card> deck;

    public:
        // default constructor
        Deck();

        // member functions to manipulate deck
        void shuffle();
        Card drawCard();

        // deck size getter
        int getDeckSize();
};
  

#endif // DECK_H_

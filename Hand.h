#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>
#include "Card.h"
#include "Deck.h"

class Hand
{
    private:
        // private vector of type Card
        std::vector<Card> hand;

    public:
        // default constructor
        Hand() = default;

        // constructor to deal hand of cards
        Hand(Deck &deck, int N)
        {
            // add card to deck n number of times
            for (int i = 0; i < N; i++)
            {
                hand.push_back(deck.drawCard());
            }
        }

        // function to display hand to human
        std::string printHand();

        // function to let human deal a card
        Card dealCard(int num);

        // function to return number of cards in hand
        int getHandSize();
};

#endif // HAND_H_

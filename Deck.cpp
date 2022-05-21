#include "Deck.h"

// default constructor that creates vector deck of all 20 cards
Deck::Deck()
{
    for (int i = 1; i < 11; i++)
    {
        deck.push_back(Card(i, Card::purple));
        deck.push_back(Card(i, Card::orange));
    }
}

// shuffle function
void Deck::shuffle()
{
    srand(unsigned(time(0)));
    random_shuffle(deck.begin(), deck.end());
}

// drawCard function returns first card from deck and deletes that card
Card Deck::drawCard()
{
    int size = deck.size() - 1;
    Card temp = deck[size];
    deck.pop_back();
    return temp;
}

// getDeckSize getter
int Deck::getDeckSize()
{
    return deck.size();
}
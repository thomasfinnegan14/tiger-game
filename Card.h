#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <iostream>

class Card
{
    public:
        //enumerated type Color
        enum Color {purple, orange};

        //default constructor
        Card() = default;

        // parameterized constructor
        Card(int rank, Color color): rank(rank), color(color)
        {
            if (color == purple)
            {
                // purple value is equal to rank
                value = rank;
            }
            else
            {
                // orange value is equal to twice rank
                value = rank * 2;
            }
        }

        // printCard function
        std::string printCard();

        // getter functions
        int getRank();
        Color getColor();
        int getValue();

    private:
        //private member variables
        int rank {0};
        Color color = purple;
        int value {0};
};
  

#endif // CARD_H_

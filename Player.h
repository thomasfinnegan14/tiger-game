// Note: There is no Player.cpp file.
// The player class is simple enough to
// implement everything in Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
    public:
        // member variables
        Hand hand;
        int score {0};

        // default constructor
        Player() = default;

        // parameterized constructor to initialize hand
        Player(Deck &deck, int N): hand(deck, N) {}
};
  

#endif // PLAYER_H_

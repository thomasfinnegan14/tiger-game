#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {

    // 1. Create a deck of cards and shuffle it.
    Deck deckofcards;
    deckofcards.shuffle();
    
    // 2. Create two players, each one with 5 cards in their hand.
    Player human(deckofcards, 5);
    Player computer(deckofcards, 5);
    // 3. Play five rounds. In each round:
    //    - Have computer deal a card from their hand.
    //    - Show human their hand of cards so that they can make a selection.
    //    - Have human deal their card. 
    //    - Determine who won the round and update points accordingly.
    //    - Print results for current round.
    // 4. Print final game results. 

    // display title text
    cout << "Welcome to TigerGame!" << endl;
    cout << "The deck was shuffled and each player has drawn 5 cards." << endl << endl;

    // for loop to play 5 rounds
    for (int i = 0; i < 5; i++)
    {
        // print Round
        cout << "Round " << i+1 << endl;
        cout << "-------" << endl;
        
        // print card that computer plays
        cout << "The computer plays: ";
        Card compCard = computer.hand.dealCard(1);
        cout << compCard.printCard();
        cout << endl;

        // show human their hand
        cout << "Your hand: ";
        cout << human.hand.printHand() << endl;

        // get human input
        cout << "Which card do you want to play? ";
        int selection;
        cin >> selection;

        // input validation
        while (selection < 1 || selection > human.hand.getHandSize())
        {
            cout << "Please select a valid card number: ";
            cin >> selection;
        }

        // set human selection
        Card humanCard = human.hand.dealCard(selection);
        cout << "You played: " << humanCard.printCard();
        cout << endl;

        // compare cards
        if (compCard.getValue() > humanCard.getValue())
        {
            // if computer wins add values together to computer's score
            computer.score += compCard.getValue() + humanCard.getValue();
            cout << "The computer wins this round!" << endl;
        }
        else if (compCard.getValue() < humanCard.getValue())
        {
            // if human wins add values together to human's score
            human.score += compCard.getValue() + humanCard.getValue();
            cout << "You win this round!" << endl;
        }
        else
        {
            // nothing happens in a tie
            cout << "Tie!" << endl;
        }

        //display current scores
        cout << endl << "Current scores:" << endl;
        cout << "Human: " << human.score << endl;
        cout << "Computer: " << computer.score << endl << endl;

    }


    // print final score
    cout << endl << "FINAL SCORE:" << endl;
    cout << "Human: " << human.score << endl;
    cout << "Computer: " << computer.score << endl << endl;

    if (human.score > computer.score)
    {
        cout << "Human wins!" << endl;
    }
    else if (human.score < computer.score)
    {
        cout << "Computer wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }


    return 0;

}
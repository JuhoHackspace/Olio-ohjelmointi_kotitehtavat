#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber)
{
    this->maxNumber = maxNumber;
    this->numOfGuesses = 0;
    cout << "GAME CONSTRUCTOR: Object initialized with " << maxNumber << " as maximum value." << endl;
}
Game::~Game()
{
    cout << "GAME DESTRUCTOR: Object cleared from stack memory." << endl;
}
void Game::play()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    this->randomNumber = (rand() % this->maxNumber) + 1;

    while(true) {
        cout << "Guess a number between 1 and " << this->maxNumber << ": ";
        cin >> this->playerGuess;

        if(this->playerGuess < this->randomNumber) {
            cout << "Your guess is too small." << endl;
            this->numOfGuesses++;
        }
        else if(this->playerGuess > this->randomNumber) {
            cout << "You guess is too big." << endl;
            this->numOfGuesses++;
        }
        else {
            cout << "Your guess is right = " << this->playerGuess << endl;
            this->numOfGuesses++;
            break;
        }
    }
    printGameResult();
}
void Game::printGameResult()
{
    cout << "You guessed the right answer = " << this->playerGuess << " with " << this->numOfGuesses << " guesses." << endl;
}

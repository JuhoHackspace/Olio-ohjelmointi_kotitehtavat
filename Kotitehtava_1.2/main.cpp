#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum);

int main()
{
    int max_num;
    cout << "Give the highest possible number to guess: ";
    cin >> max_num;
    int nmbr_of_guesses = game(max_num);
    cout << "It took " << nmbr_of_guesses << " attempts to quess the number. Good job!";
    return 0;
}
int game(int maxnum) {
    srand(static_cast<unsigned int>(time(nullptr)));
    int target_number = (rand()%maxnum)+1;
    int guesses = 0;
    while(true) {
        cout << "Guess a number between 1-" << maxnum << ": ";
        int guess;
        cin >> guess;

        if(guess > target_number) {
            cout << "The number is smaller" << endl;
            guesses++;
        }
        else if(guess < target_number) {
            cout << "The number is bigger" << endl;
            guesses++;
        }
        else {
            cout << "You guessed it, the number was " << target_number << endl;
            break;
        }
    }
    return guesses;
}

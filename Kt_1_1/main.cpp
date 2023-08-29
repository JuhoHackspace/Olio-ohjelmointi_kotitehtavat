#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(54);
    int target_number = (rand()%20)+1;

    while(true) {
        cout << "Guess a number between 1-20: ";
        int guess;
        cin >> guess;

        if(guess > target_number) {
            cout << "Luku on pienempi" << endl;
        }
        else if(guess < target_number) {
            cout << "Luku on suurempi" << endl;
        }
        else {
            cout << "Arvasit oikein, luku oli " << target_number << endl;
            break;
        }
    }
    return 0;
}

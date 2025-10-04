#include <iostream>
using namespace std;

int main() {
    int secretNumber = 40, guess;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again.";
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again.";
        }
        else {
            cout << "You guessed it right!" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
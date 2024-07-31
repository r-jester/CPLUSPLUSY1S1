#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        // Validate the input
        if (guess < 1 || guess > 100) {
            cout << "Please enter a valid guess between 1 and 100." << endl;
            continue;
        }

        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again!" << endl;
        } else {
            cout << "Too high. Try again!" << endl;
        }

    } while (guess != secretNumber);

    return 0;
}


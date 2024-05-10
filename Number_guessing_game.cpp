#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 7;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. You have " << maxAttempts << " attempts to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low. Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    } while (attempts < maxAttempts);

    if (attempts == maxAttempts) {
        cout << "Sorry, you ran out of attempts. The number was " << randomNumber << "." << endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNum1to100 = rand() % 100 + 1; // Generate random number between 1 and 100

    int userNum;
    int attempts = 5;
    bool guessed = false;

    cout << "Welcome to the Guessing Game! You have " << attempts << " attempts to guess the number between 1 and 100." << endl;

    while (!guessed && attempts > 0) {
        cout << "Enter your guess: ";
        cin >> userNum;

        // Validate input to ensure it's within range
        if (userNum < 1 || userNum > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            continue; // Skip to the next iteration
        }

        // Check the user's guess
        if (userNum < randomNum1to100) {
            attempts--;
            cout << "Close, but guess higher!" << endl;
            cout << "Attempts remaining: " << attempts << endl;
        } else if (userNum > randomNum1to100) {
            attempts--;
            cout << "Close, but guess lower!" << endl;
            cout << "Attempts remaining: " << attempts << endl;
        } else {
            cout << "You guessed it! The number was " << randomNum1to100 << "." << endl;
            guessed = true;
        }
    }

    // Check if the user ran out of attempts
    if (attempts == 0) {
        cout << "You ran out of attempts. The number was " << randomNum1to100 << "." << endl;
    }

    return 0;
}

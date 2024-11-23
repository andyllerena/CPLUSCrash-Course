#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <string>
using namespace std;

// Function prototypes
int computerChoice();
string choiceToString(int choice);
void displayAsciiArt(int choice);
void displayStats(int wins, int losses, int ties);

int main() {
    srand(time(0)); // Seed the random number generator once

    int choice;
    int compChoice;

    // Game stats
    int wins = 0, losses = 0, ties = 0;

    cout << "Welcome to Rock Paper Scissors!" << endl;

    while (true) {
        cout << "\nTime to make your choice: " << endl;
        cout << "\nSelect:\n";
        cout << "  - 1 to choose Rock\n";
        cout << "  - 2 to choose Paper\n";
        cout << "  - 3 to choose Scissors\n";
        cout << "  - 4 to Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Quit logic
        if (choice == 4) {
            cout << "Thanks for playing! Here are your final stats:" << endl;
            displayStats(wins, losses, ties);
            break;
        }

        // Input validation
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            continue;
        }

        // Computer makes its choice
        compChoice = computerChoice();

        // Display the user's and computer's choice as ASCII art
        cout << "\nYou chose:" << endl;
        displayAsciiArt(choice);

        cout << "\nThe computer chose:" << endl;
        displayAsciiArt(compChoice);

        // Determine the outcome
        if (choice == compChoice) {
            cout << "\nIt's a tie!" << endl;
            ties++;
        } else if ((choice == 1 && compChoice == 3) || // Rock beats Scissors
                   (choice == 2 && compChoice == 1) || // Paper beats Rock
                   (choice == 3 && compChoice == 2)) { // Scissors beat Paper
            cout << "\nYou won!" << endl;
            wins++;
        } else {
            cout << "\nYou lost!" << endl;
            losses++;
        }

        // Display current stats after each round
        displayStats(wins, losses, ties);
    }

    return 0;
}

// Function to generate computer's choice
int computerChoice() {
    return rand() % 3 + 1; // Generate a number between 1 and 3
}

// Function to convert numerical choice to string
string choiceToString(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid"; // Shouldn't happen
    }
}

// Function to display ASCII art for choices
void displayAsciiArt(int choice) {
    switch (choice) {
        case 1: // Rock
            cout << "    _______" << endl;
            cout << "---'   ____)" << endl;
            cout << "      (_____)" << endl;
            cout << "      (_____)" << endl;
            cout << "      (____)" << endl;
            cout << "---.__(___)" << endl;
            break;
        case 2: // Paper
            cout << "    _______" << endl;
            cout << "---'   ____)____" << endl;
            cout << "          ______)" << endl;
            cout << "          _______)" << endl;
            cout << "         _______)" << endl;
            cout << "---.__________)" << endl;
            break;
        case 3: // Scissors
            cout << "    _______" << endl;
            cout << "---'   ____)____" << endl;
            cout << "          ______)" << endl;
            cout << "       __________)" << endl;
            cout << "      (____)" << endl;
            cout << "---.__(___)" << endl;
            break;
    }
}

// Function to display current stats
void displayStats(int wins, int losses, int ties) {
    cout << "\nGame Stats:" << endl;
    cout << "  Wins: " << wins << endl;
    cout << "  Losses: " << losses << endl;
    cout << "  Ties: " << ties << endl;
}

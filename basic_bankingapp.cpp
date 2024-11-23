#include <iostream>
#include <string>
using namespace std;

int balance = 5000; // Global balance variable

// Function prototypes
void checkBalance();
int deposit(int amount);
int withdraw(int amount);

int main() {
    string name = "Andy";
    int choice; // To store menu selection
    int amount; // To store deposit/withdrawal amount

    cout << "Welcome to AXL Bank, " << name << "!" << endl;

    while (true) {
        // Display menu
        cout << "\nPlease choose:\n";
        cout << "  - 1 to Check Balance\n";
        cout << "  - 2 to Deposit\n";
        cout << "  - 3 to Withdraw\n";
        cout << "  - 4 to Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Menu logic
        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                cout << "Enter the amount you want to deposit: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid deposit amount. Please enter a positive value." << endl;
                } else {
                    cout << "Your new balance is: " << deposit(amount) << endl;
                }
                break;

            case 3:
                cout << "Enter the amount you want to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
                } else {
                    int result = withdraw(amount);
                    if (result == -1) {
                        cout << "Insufficient balance. Please try a smaller amount." << endl;
                    } else {
                        cout << "Your new balance is: " << result << endl;
                    }
                }
                break;

            case 4:
                cout << "Thank you for using AXL Bank. Have a great day!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

// Function to check balance
void checkBalance() {
    cout << "Your current balance is: " << balance << endl;
}

// Function to deposit money
int deposit(int amount) {
    balance += amount; // Add deposit amount to balance
    return balance;
}

// Function to withdraw money
int withdraw(int amount) {
    if (amount > balance) {
        return -1; // Return -1 if insufficient funds
    } else {
        balance -= amount; // Deduct amount from balance
        return balance;
    }
}

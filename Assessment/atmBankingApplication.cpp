#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;
    int pin;

public:
    // Constructor
    BankAccount(string name, int accNo, double bal, int p) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
        pin = p;
    }

    // Verify PIN
    bool verifyPin(int enteredPin) {
        return pin == enteredPin;
    }

    // Display account info
    void displayInfo() {
        cout << "\n--- Account Information ---\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Remaining Balance: $" << balance << endl;
        }
    }

    // Check balance
    void checkBalance();
};

// Example of Scope Resolution Operator (::)
void BankAccount::checkBalance() {
    cout << "Your Current Balance is: $" << balance << endl;
}

// Main ATM Simulation
int main() {
    // Create a Bank Account object using constructor
    BankAccount account1("Jainil Patel", 123456, 5000.0, 1234);

    int enteredPin, choice;
    cout << "======= Welcome to ATM Banking Application =======" << endl;

    // PIN Verification using loop and condition
    int attempts = 0;
    bool loggedIn = false;

    while (attempts < 3) {
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (account1.verifyPin(enteredPin)) {
            cout << "Login Successful!\n";
            loggedIn = true;
            break;
        } else {
            cout << "Incorrect PIN. Try again.\n";
            attempts++;
        }
    }

    if (!loggedIn) {
        cout << "Too many failed attempts. Exiting...\n";
        return 0;
    }

    // ATM Menu
    do {
        cout << "\n===== ATM Menu =====" << endl;
        cout << "1. Display Account Info" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account1.displayInfo();
            break;
        case 2: {
            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            account1.deposit(depositAmount);
            break;
        }
        case 3: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            account1.withdraw(withdrawAmount);
            break;
        }
        case 4:
            account1.checkBalance();
            break;
        case 5:
            cout << "Thank you for using ATM. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Bank Account Class
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accName, int accNumber, double initialBalance) {
        name = accName;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Deposit Money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "₹" << amount << " deposited successfully!\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw Money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully!\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Display Account Details
    void displayDetails() const {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: ₹" << balance << "\n";
    }

    // Get Account Number
    int getAccountNumber() const {
        return accountNumber;
    }
};

// Function to find an account by account number
BankAccount* findAccount(vector<BankAccount>& accounts, int accNumber) {
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNumber) {
            return &acc;
        }
    }
    return nullptr;
}

int main() {
    vector<BankAccount> accounts;
    int choice, accNumber;
    string name;
    double amount;
    
    cout << "🏦 Welcome to Simple Bank Management System 🏦\n";

    while (true) {
        cout << "\n1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Check Balance\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Account Holder Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Account Number: ";
                cin >> accNumber;
                accounts.push_back(BankAccount(name, accNumber, 0.0));
                cout << "Account created successfully! 🎉\n";
                break;

            case 2:
                cout << "Enter Account Number: ";
                cin >> accNumber;
                if (auto* acc = findAccount(accounts, accNumber)) {
                    cout << "Enter amount to deposit: ₹";
                    cin >> amount;
                    acc->deposit(amount);
                } else {
                    cout << "Account not found!\n";
                }
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> accNumber;
                if (auto* acc = findAccount(accounts, accNumber)) {
                    cout << "Enter amount to withdraw: ₹";
                    cin >> amount;
                    acc->withdraw(amount);
                } else {
                    cout << "Account not found!\n";
                }
                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> accNumber;
                if (auto* acc = findAccount(accounts, accNumber)) {
                    acc->displayDetails();
                } else {
                    cout << "Account not found!\n";
                }
                break;

            case 5:
                cout << "Thank you for using our banking system! 🚀\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}

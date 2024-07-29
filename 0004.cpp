#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(string accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    void checkBalance() const {
        cout << "Account Balance: $" << balance << endl;
    }
    void displayAccountDetails() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789", "John Doe", 1000.00);
    myAccount.displayAccountDetails();
    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.checkBalance();
}


#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    void initializeAccount(const std::string& name, int accNumber, const std::string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Amount deposited successfully.\n";
        } else {
            std::cout << "Invalid amount for deposit.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Amount withdrawn successfully.\n";
        } else {
            std::cout << "Invalid amount for withdrawal or insufficient balance.\n";
        }
    }

    void display() const {
        std::cout << "Depositor Name: " << depositorName << "\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Type: " << accountType << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    BankAccount myAccount;

    myAccount.initializeAccount("John Doe", 123456789, "Savings", 1000.0);

    std::cout << "Initial Account Details:\n";
    myAccount.display();

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    std::cout << "\nUpdated Account Details:\n";
    myAccount.display();

    return 0;
}


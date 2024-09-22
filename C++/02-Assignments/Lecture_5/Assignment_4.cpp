#include <iostream>
#include <vector>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    std::string accountType;
    double accountBalance;

public:
    BankAccount(int accNum, std::string accHolder, std::string accType, double accBalance)
        : accountNumber(accNum), accountHolderName(accHolder), accountType(accType), accountBalance(accBalance) {}

    void Deposit(double amount) {
        accountBalance += amount;
    }

    void Withdraw(double amount) {
        if (amount <= accountBalance) {
            accountBalance -= amount;
        } else {
            std::cout << "Insufficient balance" << std::endl;
        }
    }

    int GetAccountNumber() {
        return accountNumber;
    }

    std::string GetAccountHolder() {
        return accountHolderName;
    }

    std::string GetAccountType() {
        return accountType;
    }

    double GetAccountBalance() {
        return accountBalance;
    }

    void DisplayAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Account Balance: " << accountBalance << std::endl;
    }
};

class Bank {
private:
    std::vector<BankAccount> accounts;

public:
    void AddAccount(int accNum, std::string accHolder, std::string accType, double accBalance) {
        BankAccount newAccount(accNum, accHolder, accType, accBalance);
        accounts.push_back(newAccount);
    }

    double GetTotalBalance() {
        double total = 0;
        for (auto acc : accounts) {
            total += acc.GetAccountBalance();
        }
        return total;
    }

    void DisplayAllAccounts() {
        for (auto acc : accounts) {
            acc.DisplayAccountInfo();
            std::cout << std::endl;
        }
    }
};

int main() {
    Bank bank;

    bank.AddAccount(1, "Alice", "Savings", 1000);
    bank.AddAccount(2, "Bob", "Current", 500);

    bank.DisplayAllAccounts();

    std::cout << "Total Balance of all accounts: " << bank.GetTotalBalance() << std::endl;

    return 0;
}
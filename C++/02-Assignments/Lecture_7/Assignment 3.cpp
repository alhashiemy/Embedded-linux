#include <iostream>
#include <string>

class Account
{
protected:
    int accountNumber;
    std::string accountHolder;
    double balance;

public:
    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            std::cout << "Insufficient balance\n";
    }

    void display()
    {
        std::cout << "Account Details:\nAccount Number: " << accountNumber
                  << "\nAccount Holder: " << accountHolder
                  << "\nBalance: " << balance << "\n";
    }
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
    }
};

class CheckingAccount : public Account
{
private:
    double transactionFee;

public:
    void deductTransactionFee()
    {
        balance -= transactionFee;
    }
};

int main()
{
    SavingsAccount savings;
    savings.accountNumber = 123;
    savings.accountHolder = "John Doe";
    savings.balance = 1000;
    savings.interestRate = 5;

    savings.deposit(500);
    savings.calculateInterest();
    savings.display();

    CheckingAccount checking;
    checking.accountNumber = 456;
    checking.accountHolder = "Jane Smith";
    checking.balance = 2000;
    checking.transactionFee = 10;

    checking.withdraw(300);
    checking.deductTransactionFee();
    checking.display();

    return 0;
}


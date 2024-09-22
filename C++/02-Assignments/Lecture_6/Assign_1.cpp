#include <iostream>
#include <string>

class RankAccount {
    protected:
        std::string accountNumber;
        double balance;

    public:
        RankAccount(std::string accNum = "nall", double bal = 0) : accountNumber(accNum), balance(bal) {}

        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (balance >= amount)
                balance -= amount;
            else
                std::cout << "Insufficient balance." << std::endl;
        }

        void displayInfo() {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
        }
};

class SavingsAccount : public RankAccount {
    private:
        double interestRate;

    public:
        SavingsAccount(std::string accNum, double bal, double rate):RankAccount(accNum,bal), interestRate(rate) {}

        void calculateInterest() {
            double interest = balance * interestRate / 100;
            balance += interest;
        }

        void displayInfo() {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
            std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
        }
};

class CheckingAccount : public RankAccount {
    private:
        double transactionFee;

    public:
        CheckingAccount(std::string accNum, double bal, double fee):RankAccount(accNum,bal), transactionFee(fee) {}

        void deductTransactionFee() {
            balance -= transactionFee;
        }

        void displayInfo() {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
            std::cout << "Transaction Fee: " << transactionFee << std::endl;
        }
};

int main() {
    SavingsAccount savings("Mohamed",500 ,2.5);
    CheckingAccount checking("Ahmed",1000,5);

    savings.deposit(500);
    savings.calculateInterest();
    savings.displayInfo();

    checking.withdraw(100);
    checking.deductTransactionFee();
    checking.displayInfo();

    return 0;
}
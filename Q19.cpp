#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float initialBalance) {
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(6000); // create account with initial balance

    account.showBalance();
    account.deposit(500);
    account.withdraw(1000);
    account.showBalance();

    return 0;
}
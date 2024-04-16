#include <iostream>
using namespace std;

class Account {
public:
    Account(int id, double balance) : id(id), balance(balance) {}
    int getId() { return id; }
    double getBalance() { return balance; }
    void deposit(double amount) { balance += amount; }
    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

private:
    int id;
    double balance;
};

class Bank {
public:
    void transferMoney(Account& fromAccount, Account& toAccount, double amount) {
        if (fromAccount.withdraw(amount)) {
            toAccount.deposit(amount);
            cout << "Transfer successful: $" << amount << " transferred from account "
            << fromAccount.getId()
            << " to account "
            << toAccount.getId() << endl;
        }
        else {
            cout << "Transfer failed: insufficient funds in account " << fromAccount.getId() << endl;
        }
    }
};

int main() {
    Account account1(123, 1000.00);
    Account account2(456, 500.00);
    Bank bank;
    bank.transferMoney(account1, account2, 250.00);

    // Output the final balances to verify the transfer
    cout << "Account 1 balance: $" << account1.getBalance() << endl;
    cout << "Account 2 balance: $" << account2.getBalance() << endl;

    return 0;
}

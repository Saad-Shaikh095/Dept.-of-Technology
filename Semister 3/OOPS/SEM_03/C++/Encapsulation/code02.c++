#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void showBalance() {
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(5000);     // Valid deposit
    acc.showBalance();     // Output: Balance: ₹5000

    // acc.balance = 10000; // ❌ Not allowed: balance is private
    return 0;
}
#include <iostream>
#include <exception>

using namespace std;


class BankException : public exception {
public:
    virtual const char* what() const noexcept override {
        return "Banking transaction error occurred.";
    }
};


class InsufficientBalance : public BankException {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient balance for withdrawal.";
    }
};


class InvalidAmount : public BankException {
public:
    const char* what() const noexcept override {
        return "Error: Invalid transaction amount.";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw InvalidAmount();
        }
        balance += amount;
        cout << "Deposit successful." << endl;
        cout << "Current balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw InvalidAmount();
        }
        if (amount > balance) {
            throw InsufficientBalance();
        }
        balance -= amount;
        cout << "Withdrawal successful." << endl;
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);
    int choice;
    double amount;

    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    try {
        if (choice == 1) {
            account.deposit(amount);
        } else if (choice == 2) {
            account.withdraw(amount);
        } else {
            cout << "Invalid choice." << endl;
        }
    } catch (const InsufficientBalance& e) {
        cout << e.what() << endl;
    } catch (const InvalidAmount& e) {
        cout << e.what() << endl;
    } catch (const BankException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
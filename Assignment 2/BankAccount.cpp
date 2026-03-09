#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Setter functions
    void setAccountNumber(int accNo)
    {
        accountNumber = accNo;
    }

    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }

    void setBalance(double bal)
    {
        balance = bal;
    }

    // Getter functions
    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    // Deposit method
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    // Withdraw method
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal successful.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    // Display details
    void displayAccountDetails()
    {
        cout << "\nAccount Details\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;
    int choice;
    int accNo;
    string name;
    double balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    acc.setAccountNumber(accNo);
    acc.setAccountHolderName(name);
    acc.setBalance(balance);

    do
    {
        cout << "\n----- Bank Menu -----\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc.deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
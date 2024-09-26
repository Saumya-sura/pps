#include <iostream>
using namespace std;

struct Account {
    int accountNumber;
    string accountHolderName;
    double balance;
};

int main() {
    int n;
    cout << "Enter the number of accounts: ";
    cin >> n;

    Account accounts[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for account " << i + 1 << ":\n";
        cout << "Account Number: ";
        cin >> accounts[i].accountNumber;
        cout << "Account Holder Name: ";
        cin >> accounts[i].accountHolderName;
        cout << "Balance: ";
        cin >> accounts[i].balance;
    }

    int searchNumber;
    cout << "\nEnter the account number to search: ";
    cin >> searchNumber;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (accounts[i].accountNumber == searchNumber) {
            cout << "Account Found!\n";
            cout << "Account Number: " << accounts[i].accountNumber << endl;
            cout << "Account Holder Name: " << accounts[i].accountHolderName << endl;
            cout << "Balance: $" << accounts[i].balance << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found.\n";
    }

    return 0;
}

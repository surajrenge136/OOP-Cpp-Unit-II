#include <iostream>
using namespace std;

class Account
{
private:
    float balance;

public:
    Account(float b)
    {
        balance = b;
    }

    friend class Auditor;
};

class Auditor
{
public:
    void displayBalance(Account a)
    {
        cout << "Account Balance: Rs. "
             << a.balance << endl;
    }
};

int main()
{
    Account account(50000);

    Auditor auditor;

    auditor.displayBalance(account);

    return 0;
}
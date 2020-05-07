#include "savings.h"
#include <iostream>

using namespace std;

void savings::DoWithdraw(double amount)
{
    SetBalance(GetBalance() - amount);

    account::numwithdraws++;
}

savings::savings()
{
    SetName("John Doe");
    SetTaxID(1337);
    SetBalance(0);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

savings::savings(string n, long t, double b)
{
    SetName(n);
    SetTaxID(t);
    SetBalance(b);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

void savings::display()
{
    cout << "\nSavings Account" << endl;

    account::display();

    cout << "\n\nNumber of Deposits: " << account::numdeposits << endl;
    cout << "Number of Withdrawals: " << account::numwithdraws << endl;
}

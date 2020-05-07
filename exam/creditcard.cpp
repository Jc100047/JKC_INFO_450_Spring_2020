#include "creditcard.h"
#include <iostream>
#include <string>

using namespace std;

void creditcard::DoCharge(string name, double amount)
{
    SetBalance(GetBalance() + amount);

    for(int i = 9; i >= 1; i--)
    {
        last10charges[i] = last10charges[i - 1];
    }

    last10charges[0] = name;

    account::numwithdraws++;
}

void creditcard::MakePayment(double amount)
{
    SetBalance(GetBalance() - amount);

    account::numdeposits++;
}

creditcard::creditcard()
{
    SetName("John Doe");
    SetTaxID(1337);
    SetBalance(0);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

creditcard::creditcard(string n, long t, double b)
{
    SetName(n);
    SetTaxID(t);
    SetBalance(b);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

void creditcard::display()
{
    cout << "\nCredit Card Account" << endl;

    account::display();

    cout << "\n\nLast 10 Charges" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Charge " << i + 1 << ": " << last10charges[i] << endl;
    }

    cout << "\n\nNumber of Deposits: " << account::numdeposits << endl;
    cout << "Number of Withdrawals: " << account::numwithdraws << endl;
}

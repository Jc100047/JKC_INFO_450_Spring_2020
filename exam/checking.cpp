#include "checking.h"
#include <iostream>

using namespace std;

void checking::WriteCheck(int checknum, double amount)
{
    SetBalance(GetBalance() - amount);

    for(int i = 9; i >= 1; i--)
    {
        last10checks[i] = last10checks[i - 1];
    }

    last10checks[0] = checknum;
    account::numwithdraws++;
}

checking::checking()
{
    SetName("John Doe");
    SetTaxID(1337);
    SetBalance(0);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

checking::checking(string n, long t, double b)
{
    SetName(n);
    SetTaxID(t);
    SetBalance(b);
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

void checking::display()
{
    cout << "\nChecking Account" << endl;

    account::display();

    cout << "\tLast 10 Check #'s" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Check #" << last10checks[i] << endl;
    }

    cout << "\n\nNumber of Deposits: " << account::numdeposits << endl;
    cout << "Number of Withdrawals: " << account::numwithdraws << endl;
}

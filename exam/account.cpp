#include "account.h"

#include <string>
#include <iostream>

using namespace std;

string account::GetName()
{
    return name;
}

long account::GetTaxID()
{
    return taxID;
}

double account::GetBalance()
{
    return balance;
}

void account::SetName(string n)
{
    name = n;
}

void account::SetTaxID(long t)
{
    taxID = t;
}

void account::SetBalance(double b)
{
    balance = b;
}

void account::MakeDeposit(double amount)
{
    SetBalance(GetBalance() + amount);

    account::numdeposits++;
}

account::account()
{
    name = "John Doe";
    taxID = 1337;
    balance = 0;
    account::numdeposits = 0;
    account::numwithdraws = 0;
}

account::account(string n, long t, double b)
{
    name = n;
    taxID = t;
    balance = b;
    account::numdeposits = 0;
    account::numwithdraws = 0;

}

void account::display()
{
    cout << "Name: " << GetName() << endl;
    cout << "TaxID: " << GetTaxID() << endl;
    cout << "Balance: $" << GetBalance() << endl;
}

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;


class account
{
    public:

        void SetName(string n);
        void SetTaxID(long t);
        void SetBalance(double b);

        string GetName();
        long GetTaxID();
        double GetBalance();

        void MakeDeposit(double amount);

        account();
        account(string n, long t, double b);
        void display();


    protected:
        int numdeposits;
        int numwithdraws;

    private:
        string name;
        long taxID;
        double balance;
};

#endif // ACCOUNT_H

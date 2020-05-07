#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "account.h"
#include <string>

using namespace std;

class creditcard : public account
{
    public:
        void DoCharge(string name, double amount);
        void MakePayment(double amount);

        creditcard();
        creditcard(string n, long t, double b);
        void display();

    private:
        long cardnumber;
        string last10charges[10];
};

#endif // CREDITCARD_H

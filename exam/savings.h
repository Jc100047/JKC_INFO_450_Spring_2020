#ifndef SAVINGS_H
#define SAVINGS_H

#include "account.h"
#include <string>

using namespace std;

class savings : public account
{
    public:
        void DoWithdraw(double amount);

        savings();
        savings(string n, long t, double b);
        void display();
};

#endif // SAVINGS_H

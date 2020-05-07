#ifndef CHECKING_H
#define CHECKING_H

#include "account.h"

#include <string>

using namespace std;

class checking : public account
{
    public:
        void WriteCheck(int checknum, double amount);

        checking();
        checking(string n, long t, double b);
        void display();

    private:
        int last10checks[10];
};

#endif // CHECKING_H

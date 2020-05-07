#include "account.h"
#include "savings.h"
#include "checking.h"
#include "creditcard.h"

#include <iostream>
#include <string>

using namespace std;

int menu(savings *sa, checking *ch, creditcard *cr);
void executeTasks(int taskNum, savings *sa, checking *ch, creditcard *cr);
double GetAmount();
int GetCheckNum();
string GetName();


int main()
{
    int taskNum;

    savings *save = new savings("Jason Coveney", 1337, 100);
    checking *check = new checking("Jason Coveney", 1337, 100);
    creditcard *credit = new creditcard("Jason Coveney", 1337, 100);

    while(taskNum != 0)
    {
        taskNum = menu(save, check, credit);
        executeTasks(taskNum, save, check, credit);
    }

    return 0;
}


int menu(savings *sa, checking *ch, creditcard *cr)
{
    int taskNum;

    cout << "\n\nEXAM HOMEWORK" << endl;

    cout << "Checking Account Balance: $" << ch->GetBalance();
    cout << "\tSavings Account Balance: $" << sa->GetBalance();
    cout << "\tCredit Card Balance: $" << cr->GetBalance();


    cout << "\n\n1. Savings Deposit" << endl;
    cout << "2. Savings Withdrawal" << endl;
    cout << "3. Checking Deposit" << endl;
    cout << "4. Write A Check" << endl;
    cout << "5. Credit Card Payment" << endl;
    cout << "6. Make A Charge" << endl;
    cout << "7. Display Savings" << endl;
    cout << "8. Display Checking" << endl;
    cout << "9. Display Credit Card" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter Task: ";
    cin >> taskNum;

    return taskNum;
}

void executeTasks(int taskNum, savings *sa, checking *ch, creditcard *cr)
{
    switch(taskNum)
    {
        case 1:
            sa->MakeDeposit(GetAmount());
            break;
        case 2:
            sa->DoWithdraw(GetAmount());
            break;
        case 3:
            ch->MakeDeposit(GetAmount());
            break;
        case 4:
            ch->WriteCheck(GetCheckNum(), GetAmount());
            break;
        case 5:
            cr->MakePayment(GetAmount());
            break;
        case 6:
            cr->DoCharge(GetName(), GetAmount());
            break;
        case 7:
            sa->display();
            break;
        case 8:
            ch->display();
            break;
        case 9:
            cr->display();
            break;
    }
}

double GetAmount()
{
    double amount;

    cout << "Enter Amount: $";
    cin >> amount;

    return amount;
}

int GetCheckNum()
{
    int checknum;

    cout << "Enter Check #: ";
    cin >> checknum;

    return checknum;
}

string GetName()
{
    string name;

    cout << "Enter Name: ";
    cin >> name;

    return name;
}



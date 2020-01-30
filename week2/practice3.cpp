/*  Week 2 - Practice3

    Program determines if the year entered by the user is a leap year

*/

#include <iostream>

using namespace std;

int main()
{
    int userYear;

    cout << "Enter a year to see if it is a leap year: ";
    cin >> userYear;
    cout << endl << endl;

    if(userYear % 4 == 0)
    {
        if(userYear % 100 == 0 && userYear % 400 != 0)
        {
            cout << "The year " << userYear << " is not a leap year." << endl;
        }
        else if(userYear % 100 == 0 && userYear % 400 == 0)
        {
            cout << "The year " << userYear << " is a leap year." << endl;
        }
        else
        {
            cout << "The year " << userYear << " is a leap year." << endl;
        }
    }
    else
    {
        cout << "The year " << userYear << " is not a leap year." << endl;
    }

}

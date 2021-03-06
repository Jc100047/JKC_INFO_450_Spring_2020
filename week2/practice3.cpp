/*  Week 2 - Practice3

    Program determines if the year entered by the user is a leap year

*/

#include <iostream>

using namespace std;

int main()
{
    int userYear;

    cout << "\t---Leap Year Program---" << endl << endl;
    cout << "To end the program enter 0" << endl << endl;


    while(userYear != 0)
    {
        cout << "Enter a year to see if it is a leap year: ";
        cin >> userYear;
        cout << endl << endl;

        if(userYear == 0)
        {
            break;
        }

        if(userYear % 4 == 0)
        {
            if(userYear % 100 == 0 && userYear % 400 != 0)
            {
                cout << "The year " << userYear << " is not a leap year." << endl << endl;
            }
            else if(userYear % 100 == 0 && userYear % 400 == 0)
            {
                cout << "The year " << userYear << " is a leap year." << endl << endl;
            }
            else
            {
                cout << "The year " << userYear << " is a leap year." << endl << endl;
            }
        }
        else
        {
            cout << "The year " << userYear << " is not a leap year." << endl << endl;
        }
    }
}

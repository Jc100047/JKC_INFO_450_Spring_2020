/* Week 2 - practice1

    Calculates square of user input and prints it

*/

#include <iostream>
#include <iomanip>

using namespace std;

long double calculateSq(long double userInput);

int main()
{
    long double userInput = 1;

    cout << "\t---Square Calculator---" << endl;
    cout << "To end the program enter 0 instead of a positive number" << endl << endl;

    while(userInput >= 0)
    {

        cout << "Enter a positive real number: ";
        cin >> userInput;
        cout << endl;

        if(userInput > 0)
        {
            cout << "Your number: " << userInput << endl;
            cout << fixed << setprecision(2);
            cout << "Squared: " << calculateSq(userInput) << endl << endl;
        }

        if(userInput < 0)
        {
            userInput = 1;

            cout << "Input has to be positive!" << endl << endl;

            continue;
        }

        if(userInput == 0)
        {
            cout << "User Entered 0 or an Invalid Entry - Program Terminated" << endl;

            return 0;
        }
    }
}

long double calculateSq(long double userInput)
{
    long double squareValue;

    squareValue = userInput * userInput;

    return squareValue;
}

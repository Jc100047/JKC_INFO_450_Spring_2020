/*  Week2 - practice2
    Program checks if a number is prime
*/

#include <iostream>

using namespace std;

int main()
{
    int userNumber;

    cout << "\t---Prime Number Program---" << endl << endl;
    cout << "To end the program enter 0 instead of a positive integer" << endl << endl;

    do
    {
        bool isPrime = true;

        cout << "Enter a positive integer to check if it is a prime number: ";
        cin >> userNumber;
        cout << endl;

        for(int i = 2; i <= userNumber / 2; ++i)
        {
            if(userNumber % i == 0)         // Checks if the user number has a remainder that isn't 0
            {                               // If it's remainder is 0 then it isn't a prime number, hence isPrime = false
                isPrime = false;
                break;
            }
        }

        if(userNumber != 0)
        {
            if (isPrime)
            {
                cout << "The number you entered is a prime number." <<endl << endl;
            }
            else
            {
                cout << "The number you entered is not a prime number." << endl << endl;
            }
        }

    }while(userNumber != 0);
}

/*  Week 3 - circumference

    Program that calculates the circumference when given a value for the radius by the user
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calculateCircumference(double radius);
const float PI = 3.14159265359;

int main()
{
    double userRadius;

    cout << "\t---Circumference Program---" << endl << endl;
    cout << "Enter 0 instead to end the program" << endl << endl;

    while(userRadius != 0)
    {
        cout << "Enter the radius of the circle: ";
        cin >> userRadius;
        cout << endl;

        if(userRadius == 0)
        {
            break;
        }
        else
        {
            cout << "A circle with a radius of " << userRadius << " has a circumference of " << setprecision(5) << calculateCircumference(userRadius) << endl;
            cout << endl;
        }
    }
}

double calculateCircumference(double radius)
{
    double circumference;

    circumference = 2 * PI * radius;

    return circumference;
}

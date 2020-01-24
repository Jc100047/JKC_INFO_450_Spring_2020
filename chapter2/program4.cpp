// Program #4 - This program converts gallons
// to liters using floating point numbers.

#include <iostream>
using namespace std;

int main()
{
    double gallons, liters;

    cout << "Enter the number of gallons: ";
    cin >> gallons;

    liters = gallons * 3.7854;

    cout << gallons << " gallons = " << liters << " liters";

    return 0;
}

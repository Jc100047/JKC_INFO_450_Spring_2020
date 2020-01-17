// Program #3 - This program converts gallons to liters.

#include <iostream>
using namespace std;

int main()
{
    int gallons, liters;

    cout << "Enter the number of gallons: ";
    cin >> gallons;

    liters = gallons * 4; // Convert to liters

    cout << gallons << " gallons = " << liters << " liters";

    return 0;
}

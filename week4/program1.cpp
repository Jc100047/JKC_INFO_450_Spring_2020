// Week 4 - Array Program 1
//
//

#include <iostream>
#include <math.h>
#include <array>


using namespace std;

double calculateMean(array<int, 10> numArray);
double calculateStDev(array<int, 10> numArray, double mean);



int main()
{
    array<int, 10> userArray;
    int wholeNum;
    double mean;
    double standardDev;

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the number for index " << i << ": ";
        cin >> wholeNum;
        cout << endl;

        userArray[i] = wholeNum;
    }

    mean = calculateMean(userArray);
    standardDev = calculateStDev(userArray, mean);

    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << standardDev << endl;
}


double calculateMean(array<int, 10> numArray)
{
    double mean;

    for(int i = 0; i < 10; i++)
    {
        mean += numArray[i];
    }

    mean = mean / 10;

    return mean;
}

double calculateStDev(array<int, 10> numArray, double mean)
{
    double tempNum;
    double standardDev = 0;

    for(int i = 0; i < 10; i++)
    {
        tempNum = numArray[i] - mean;
        tempNum = tempNum * tempNum;
        standardDev += tempNum;
    }

    standardDev = sqrt(standardDev / numArray.size());

    return standardDev;
}

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    ofstream out("randoms.txt");
    if(!out)
    {
        cout << "Cannot open file." << endl;
        return 1;
    }

    srand (time(NULL));
    
    int randNum;

    for(int i = 0; i < 1000; i++)
    {
        randNum = rand() % 2000 + (-1000);
        
        out << randNum << endl;
    }

    out.close();

    return 0;

}


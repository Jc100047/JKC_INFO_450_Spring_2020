#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "random_write.h"

using namespace std;

int random_write()
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
        randNum = rand() % 20000 + (-10000);

        out << randNum << endl;
    }

    out.close();

    return 0;
}


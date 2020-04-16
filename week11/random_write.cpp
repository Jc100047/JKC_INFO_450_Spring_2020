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

    for(int i = 0; i < 1000; i++)
    {
        out << rand() % 2000 + (-1000) << endl;
    }

    out.close();

    return 0;

}


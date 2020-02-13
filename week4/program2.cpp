#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char students[30][100];

    for(int i = 0; i < 30; i++)
    {
        cout << "Please enter student for index " << i << ": ";
        cin.getline(students[i], 100);

        if(strlen(students[i]) == 0)
        {
            for(int j = 0; j < i; j++)
            {
                cout << endl;
                cout << "students[" << j << "]:" << students[j];
            }

            cout << endl;
            break;
        }
    }

    return 0;
}

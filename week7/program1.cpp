// Week 7 - Reverse String Function
//
//

#include <iostream>

using namespace std;

string reverse(string s1);

int main()
{
    string str1;

    do
    {
        cout << "Enter a string to reverse: ";
        getline(cin, str1);

        if(str1.size() == 0)
        {
            break;
        }

        cout << endl << "Reversed: " << reverse(str1) << endl << endl;

    }while(str1.size() != 0);

}

string reverse(string s1)
{
    int length = s1.length();

    for(int i = 0; i < length / 2; i++)
    {
        swap(s1[i], s1[length - i - 1]);
    }

    return s1;

}

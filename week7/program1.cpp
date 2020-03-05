// Week 7 - Reverse String Function
//
//

#include <iostream>

using namespace std;

string reverse(string *s1);

int main()
{

    string str;

    do
    {
        cout << "Enter a string to reverse: ";

        getline(cin, str);

        if(str.size() == 0)
        {
            break;
        }

        cout << endl << "Reversed: " << reverse(&str) << endl << endl;

    }while(str.size() != 0);

}

string reverse(string *s1)
{
    int length = s1->length();

    for(int i = 0; i < length / 2; i++)
    {
        swap(s1->at(i), s1->at(length - i - 1));
    }

    return *s1;

}

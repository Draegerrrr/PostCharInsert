#include <iostream>
#include <string>
using namespace std;

#include "InsertAfterEachStrCharTool.h"

int main()
{
    string InsertStr;
    string InputStr;
    string IgnoreSpaces;

    cout << "Welcome to the InsertAfterEachStrCharTool!\n\nThis tool lets you insert a specific string after each character in an input string." << endl;
    while (true)
    {
        cout << "Input the string to insert:" << endl;
        while (true)
        {
            cin >> InsertStr;
            if (InsertStr == "")
            {
                cout << "String to insert can not be empty! Please put in a valid string:" << endl;
            }
            else
            {
                break;
            }
        }

        cout << "Now put in the input string:" << endl;
        while (true)
        {
            cin >> InputStr;
            if (InputStr == "")
            {
                cout << "String to insert into can not be empty! Please put in a valid string:" << endl;
            }
            else
            {
                break;
            }
        }

        cout << "Ignore spaces? (Y/N):" << endl;
        while (true)
        {
            cin >> IgnoreSpaces;
            if (IgnoreSpaces == "Y" || IgnoreSpaces == "N" || IgnoreSpaces == "n" || IgnoreSpaces == "y")
            {
                break;
            }
            else
            {
                cout << "Invalid input! Y or N?" << endl;
            }
        }

        string r = InputStr.substr(0, 1);
        for (int i = 1; i <= InputStr.size(); i++)
        {
            if ((InputStr.substr(i, 1) != " " && (IgnoreSpaces == "Y" || IgnoreSpaces == "y")) || (IgnoreSpaces == "n" || IgnoreSpaces == "N"))
            {
                r = r + InsertStr + InputStr.substr(i, 1);
            }
        }

        cout << "Result:\n" << r << endl << endl;
    }
}
#include <iostream>

using namespace std;


void Problem_1(string* sArray, int sLength)
{
    int maxLen = 0;

    for (int i = 0; i < sLength; i++)
    {
        int tmp = (sArray[i]).length();
        if (tmp > maxLen)
        {
            maxLen = tmp;
        }
    }

    for (int i = 0; i < (sLength); i++)
    {

        if (i == 0)
        {
            for (int i = 0; i < maxLen+2; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "*" << sArray[i];

        for (int j = 0; j < (maxLen - sArray[i].length()); j++)
        {

            cout << " ";
        }
        cout << "*" << endl;
        if (i == sLength-1)
        {
            for (int i = 0; i < maxLen+2; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main()
{
    //string sArray[] = {"I am", "stupid!"};
    string sArray[] = {"This", "might", "turn", "out", "to", "be", "interesting"};
    int sLength = sizeof(sArray)/sizeof(sArray[0]);
    string *a;
    a = sArray;
    int b = sLength;
    Problem_1(a, b);

    return 0;
}

#include <iostream>

using namespace std;

void Problem_02()
{
    for (int i = 99; i > -1; i--)
    {
        if (i == 1)
        {
            cout << i << " bottle of beer on the wall, " << i <<" bottle of beer." << endl;
            cout << "Take one down and pass it around, " << " no more bottles of beer on the wall." << endl << endl;
        }
        else if(i > 2)
        {
            cout << i << " bottles of beer on the wall, " << i <<" bottles of beer." << endl;
            cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall." << endl << endl;
        }
        else if(i == 2)
        {
            cout << i << " bottles of beer on the wall, " << i <<" bottles of beer." << endl;
            cout << "Take one down and pass it around, " << i - 1 << " bottle of beer on the wall." << endl << endl;
        }
        else
        {
            cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
            cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
        }

    }

}


int main()
{
    Problem_02();

    return 0;
}

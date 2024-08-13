#include <iostream>

using namespace std;

int main()
{

    int i, j, rows, n = 1;

    cout << "Enter number of rows" << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j=i; j<=rows-1; j++)
        {
            cout << " ";
        }


        for (int m = 1; m <=i; m++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}
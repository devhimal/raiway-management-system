#include <iostream>

using namespace std;

int main()
{

    int i, j, rows, n=1;

    cout << "Enter number of rows" << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n++;
        }
        cout << endl;
    }

    return 0;
}
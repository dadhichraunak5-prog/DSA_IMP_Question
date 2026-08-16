// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****   ?????????????

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            /* code */
            cout << "*";
        }
        for (int c = 0; c < 2 * i; c++)
        {
            /* code */
            cout << " ";
        }

        for (int k = 0; k < n - i; k++)
        {
            /* code */
            cout << "*";
        }

        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        for (int c = 0; c < 2 * n - 2 * (i + 1); c++)
        {
            /* code */
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            /* code */
            cout << "*";
        }

        cout << "\n";
    }
}
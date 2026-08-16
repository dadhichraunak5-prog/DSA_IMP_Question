// print the loop in the give formate by using for loop

// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int k = 69;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            k = k - j;
            cout << (char)k;
            k = 69;
        }
        cout << "\n";
    }
}
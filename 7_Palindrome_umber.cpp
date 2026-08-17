// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true

// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 55;
    int original = n;

    int ans = 0;

    while (n > 0)
    {
        int y = n % 10;

        if (ans > (INT_MAX - y) / 10) // for 32 bit its prevanting to overflow
        {
            cout << "false";
            return 0;
        }

        ans = ans * 10 + y;
        n = n / 10;
    }

    cout << ans << endl;

    if (ans == original)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.

// Example 1

// Input: n = 5

// Output:

// 1

// 2

// 3

// 4

// 5

// Example 2

// Input: n = 1

// Output:

// 1

#include <iostream>
using namespace std;
void print1ToN(int n);
void print1ToN(int n)
{

    if (n < 1)
    {
        return;
    }

    print1ToN(n - 1);

    cout << n << endl;
}
int main()
{
    print1ToN(5);
    return 0;
}

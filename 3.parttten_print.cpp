// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1

// 0 1

// 1 0 1

// 0 1 0 1

// 1 0 1 0 1

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j > 0)
                cout << " ";
            if ((i + j) % 2 == 0) // if i+j =even then 1 ohterwise we gwt 0
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << "\n"; // ✅ Newline after each row
    }
    return 0;
}
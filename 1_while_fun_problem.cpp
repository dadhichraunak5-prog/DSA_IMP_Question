//  1.   array reverse problem
//  2.  Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.

// A number ends with digit d if its last digit is d.

// Example 1

// Input: d = 1

// Output: 12300

// Explanation:

// The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491

// Their sum is 12300.

// Example 2

// Input: d = 5

// Output: 12500

// ans
#include <iostream>
using namespace std;
int main()
{
    int d; // d is given number
    int sum = 0;
    int i = 0;
    int count = 0;
    int sum = 0; // To count how many numbers we've added

    while (count < 50)
    {

        int currentNum = d + (count * 10);

        sum += currentNum;
        count++;
    }

    return sum;
}

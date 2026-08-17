//------------- Check if the Number is Armstrong---------------------------------
// Subscribe to TUF+

// Hints
// Company
// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

// Example 1

// Input: n = 153

// Output: true

// Explanation: Number of digits : 3.

// 13 + 53 + 33 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.

// Example 2

// Input: n = 12

// Output: false

// Explanation: Number of digits : 2.

// 12 + 22 = 1 + 4 = 5.

// Therefore, it is not an Armstrong number.

// number of  digits is == power like 1234 then 1^4+2^4+3^4+4^4;

class Solution
{
public:
    bool isArmstrong(int n)
    {
        int x = n;
        int digits = 0;
        int sum = 0;

        int temp = n;
        while (temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;

            int power = 1;
            for (int i = 0; i < digits; i++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        return sum == x;
    }
};

// ----------------------Palindrome Number---------------------------
// Subscribe to TUF+

// Hints
// Company
// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1

// Input: n = 121

// Output: true

// Explanation: When read from left to right : 121.

// When read from right to left : 121.

// Example 2

// Input: n = 123

// Output: false

// Explanation: When read from left to right : 123.

// When read from right to left : 321.

// Now your turn!

// Input: 101
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0; // use long to save overflow in the reverse*10;
        // int have limits upto  2,147,483,647 so *10 >>>>> outside the range

        while (x > 0)
        {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
    }
};
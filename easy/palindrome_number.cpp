// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

// Example 1:

// Input: 121
// Output: true
// Example 2:

// Input: -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
// Follow up:

// Coud you solve it without converting the integer to a string?

#include <iostream>

using namespace std;

bool isPalindromeNumber(int num);

int getReverse(int num);

int main()
{
    int num = 1331;
    bool res = isPalindromeNumber(num);
    cout << boolalpha << res;
    return 0;
}

bool isPalindromeNumber(int num)
{
    int copy = num;
    int reverseOfNum = getReverse(copy);
    if (copy == reverseOfNum)
        return true;
    return false;
}

int getReverse(int num)
{
    int digit;
    int rev = 0;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}
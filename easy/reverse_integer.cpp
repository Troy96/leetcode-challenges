// Given a 32-bit signed integer, reverse digits of an integer.

// Example 1:

// Input: 123
// Output: 321
// Example 2:

// Input: -123
// Output: -321
// Example 3:

// Input: 120
// Output: 21
// Note:
// Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

#include <iostream>

using namespace std;

int rev(int n);
long revUtil(long n);

int main()
{
    int res = rev(-35545);
    cout << res;
    return 0;
}

int rev(int n)
{

    long num;
    long rev;
    num = n;
    if (num > 0)
        rev = revUtil(num);
    else
    {
        num = num * -1;
        rev = revUtil(num);
        rev = rev * -1;
    }
    (rev > INT_MAX || rev < INT_MIN) ? rev = 0 : rev;
    return rev;
}

long revUtil(long num)
{
    int digit;
    long rev = 0;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}

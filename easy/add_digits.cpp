// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

// Example:

// Input: 38
// Output: 2
// Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2.
//              Since 2 has only one digit, return it.
// Follow up:
// Could you do it without any loop/recursion in O(1) runtime? - Digit Sum

#include <iostream>
#include <math.h>

using namespace std;

int addDigits(int num);

int countDigits(int n);

int addDigitsUtils(int n);

int addDigitsInConstantTime(int  n){
    return (n % 9 == 0) ? 9 : n % 9; //Digit Root approach
}

int main()
{
    cout << addDigitsInConstantTime(879);
    return 1;
}

int addDigits(int num)
{   if(num == 0) return 0;
    while (countDigits(num) != 1)
    {
        int sum = addDigitsUtils(num);
        num = sum;
    }
    return num;
}

int countDigits(int n)
{
    return floor(log10(n) + 1);
}

int addDigitsUtils(int n)
{
    int sum = 0;
    while (n > 0) 
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}
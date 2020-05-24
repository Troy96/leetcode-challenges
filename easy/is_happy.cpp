// Write an algorithm to determine if a number n is "happy".

// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

// Return True if n is a happy number, and False if not.

// Example:

// Input: 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

#include <iostream>
#include <math.h>

using namespace std;

bool isHappy(int n);

int getSumOfDigitSqaures(int n);


int main()
{
    cout << boolalpha << isHappy(2);
    return 0;
}

bool isHappy(int n)
{   if(n == 1 || n ==7) return true;
    int temp = n;
    while (temp > 9)
    {
        int sum = getSumOfDigitSqaures(temp);
        if(sum == 1) return true;
        temp = sum;

    }
    if(temp == 7) return true;
    return false;
}

int getSumOfDigitSqaures(int n)
{
    int digit;
    int sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}



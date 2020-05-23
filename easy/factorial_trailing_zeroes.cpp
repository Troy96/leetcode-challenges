// Given an integer n, return the number of trailing zeroes in n!.

// Example 1:

// Input: 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.
// Example 2:

// Input: 5
// Output: 1
// Explanation: 5! = 120, one trailing zero.
// Note: Your solution should be in logarithmic time complexity.

#include <iostream>

using namespace std;

int trailingZeroes(int n);

int main()
{
    cout << trailingZeroes(5);
    return 0;
}

int trailingZeroes(int n)
{
    long count = 0;

    for(long i = 5; n / i >= 1; i = i* 5){
        count += n / i;
    }

    return count;
}
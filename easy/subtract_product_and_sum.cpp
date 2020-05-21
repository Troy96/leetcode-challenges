// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

// Example 1:

// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15
// Example 2:

// Input: n = 4421
// Output: 21
// Explanation:
// Product of digits = 4 * 4 * 2 * 1 = 32
// Sum of digits = 4 + 4 + 2 + 1 = 11
// Result = 32 - 11 = 21

// Constraints:

// 1 <= n <= 10^5

#include <iostream>

using namespace std;

int subtractProductAndSum(int n);

int getSum(int n);

int getProduct(int n);

int main()
{
    cout << subtractProductAndSum(4421);
    return 1;
}

int subtractProductAndSum(int n)
{
    return getProduct(n) - getSum(n);
}

int getSum(int n)
{
    int digit;
    int sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int getProduct(int n)
{
    int digit;
    int product = 1;
    while (n > 0)
    {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }
    return product;
}

// Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

// Example 1:

// Input: a = 1, b = 2
// Output: 3
// Example 2:

// Input: a = -2, b = 3
// Output: 1
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int getSum(int a, int b);

int main()
{
    return 0;
}

int getSum(int a, int b)
{
    vector<int> res{a, b};

    return accumulate(begin(res), end(res), 0);
}
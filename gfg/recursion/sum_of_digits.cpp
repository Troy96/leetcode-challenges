// Sum of Digits of a Number
// You are given a number n. You need to find the sum of digits of n.

// Input:
// The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.

// Output:
// For each testcase, in a newline, print the sum of digits of n.

// Your Task:
// This is a function problem. You only need to complete the function sumOfDigits that takes n as parameter and returns the sum of digits of n.

// Expected Time Complexity: O(Logn).
// Expected Auxiliary Space: O(Logn) (Recursive).

// Constraints:
// 1 <= T <= 105
// 1 <= n <= 107

// Examples:
// Input:
// 2
// 1
// 99999
// Output:
// 1
// 45

// Explanation:
// Testcase 1: Sum of digits for 1 is 1.
// Testcase 2: Sum of digits for 99999 is 9 + 9 + 9 + 9 + 9 = 45 

#include <iostream>

using namespace std;

int sumOfDigits(int n);

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << sumOfDigits(N) <<endl;
    }

    return 0;
}

int sumOfDigits(int n)
{
    if(n == 0) return 0;
    return (n%10 + sumOfDigits(n/10));
}


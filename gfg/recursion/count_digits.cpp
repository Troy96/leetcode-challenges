// Count Total Digits in a Number
// You are given a number n. You need to find the count of digits in n.

// Input:
// The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.

// Output:
// For each testcase, in a newline, print the count of digits in n.

// Your Task:
// This is a function problem. You only need to complete the function countDigits that takes n as parameter and returns the count of digits in n.

// Expected Time Complexity: O(Logn).
// Expected Auxiliary Space: O(Logn).

// Constraints:
// 1 <= T <= 105
// 0 <= n <= 107

// Examples:
// Input:
// 2
// 1
// 99999
// Output:
// 1
// 5

// Explanation:
// Testcase 1: Number of digits in 1 is 1.
// Testcase 2: Number of digits in 99999 is 5.

#include <iostream>

using namespace std;

int countDigits(int n);

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << countDigits(N) <<endl;
    }

    return 0;
}

int countDigits(int n)
{
    if(n < 10) return 1;
    return 1 + countDigits(n/10);
}


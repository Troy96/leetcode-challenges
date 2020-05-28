// Given an integer n, return any array containing n unique integers such that they add up to 0.

// Example 1:

// Input: n = 5
// Output: [-7,-1,1,3,4]
// Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
// Example 2:

// Input: n = 3
// Output: [-1,0,1]
// Example 3:

// Input: n = 1
// Output: [0]

// Constraints:

// 1 <= n <= 1000

#include <iostream>
#include <vector>

using namespace std;

vector<int> sumZero(int n);

int main()
{
    vector<int> ans;

    ans = sumZero(2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}

vector<int> sumZero(int n)
{
    vector<int> result;

    if (n == 0)
        result.push_back(1);

    else if (n % 2 == 0)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            result.push_back(i);
            result.push_back(-i);
        }
    }
    else
    {
        result.push_back(0);
        for (int i = 1; i <= n / 2; i++)
        {
            result.push_back(i);
            result.push_back(-i);
        }
    }
    return result;
}
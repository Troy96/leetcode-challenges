// Given a set of distinct positive integers, find the largest subset such that every pair (Si, Sj) of elements in this subset satisfies:

// Si % Sj = 0 or Sj % Si = 0.

// If there are multiple solutions, return any subset is fine.

// Example 1:

// Input: [1,2,3]
// Output: [1,2] (of course, [1,3] will also be ok)
// Example 2:

// Input: [1,2,4,8]
// Output: [1,2,4,8]

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    return 0;
}

vector<int> largestDivisibleSubset(vector<int> &nums)
{

    int len = nums.size();

    if (len == 0)
        return {};

    sort(nums.begin(), nums.end());

    vector<int> divC(len, 1);
    vector<int> prev(len, -1);

    int max_ind = 0;

    for (int i = 1; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] % nums[j] == 0)
            {
                if (divC[i] < divC[j] + 1)
                {
                    divC[i] = divC[j] + 1;
                    prev[i] = j;
                }
            }
        }
        if (divC[max_ind] < divC[i])
            max_ind = i;
    }
    int k = max_ind;
    vector<int> res;
    while (k >= 0)
    {
        res.push_back(nums[k]);
        k = prev[k];
    }
    return res;
}
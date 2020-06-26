// Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

// Find all the elements of [1, n] inclusive that do not appear in this array.

// Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

// Example:

// Input:
// [4,3,2,7,8,2,3,1]

// Output:
// [5,6]

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    return 0;
}

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    unordered_map<int, int> count;
    vector<int> res;

    for (int i = 1; i <= nums.size(); i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }

    for (auto c : count)
    {
        if (c.second == 0)
        {
            res.push_back(c.first);
        }
    }

    return res;
}
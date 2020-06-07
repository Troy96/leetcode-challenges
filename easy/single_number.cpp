// Given a non-empty array of integers, every element appears twice except for one. Find that single one.

// Note:

// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Example 1:

// Input: [2,2,1]
// Output: 1
// Example 2:

// Input: [4,1,2,1,2]
// Output: 4

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int singleNumber(vector<int> &nums);

int main()
{
    return 0;
}

int singleNumber(vector<int> &nums)
{
    map<int, int> numHash;
    map<int, int>::iterator mapItr;
    int res;

    for (int i = 0; i < nums.size(); i++)
    {
        mapItr = numHash.find(i);
        numHash.insert(pair<int, int>(i, mapItr->second + 1));
    }

    for (int i = 0; i < nums.size(); i++)
    {
        mapItr = numHash.find(i);
        if (mapItr->second == 1)
        {
            res = i;
            break;
        }
    }

    return res;
}
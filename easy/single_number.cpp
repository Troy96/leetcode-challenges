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
#include <unordered_map>

using namespace std;

int singleNumber(vector<int> &nums);

int main()
{   vector<int>vect{2,2,1};
cout << singleNumber(vect);
    return 0;
}

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> numHash;
    int res;

    for (int i = 0; i < nums.size(); i++)
    {
        numHash[nums[i]]++;
    }

    for (auto num : numHash)
    {
      if(num.second == 1) {
          return res = num.first;
      }
    }

    return res;
}
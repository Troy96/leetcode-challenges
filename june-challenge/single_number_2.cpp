// Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

// Note:

// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Example 1:

// Input: [2,2,3,2]
// Output: 3
// Example 2:

// Input: [0,1,0,1,0,1,99]
// Output: 99

#include <vector>
#include <unordered_map>

using namespace std;

int main()
{   
    return 0;
}

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> count;

    int res;

    for(int i =0; i< nums.size(); i++) {
        count[nums[i]]++;
    }

    for(auto c : count) {
        if(c.second == 1) res = c.first;
    }

    return res;

}
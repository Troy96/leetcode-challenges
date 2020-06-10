// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Example 1:

// Input: [1,3,5,6], 5
// Output: 2
// Example 2:

// Input: [1,3,5,6], 2
// Output: 1
// Example 3:

// Input: [1,3,5,6], 7
// Output: 4
// Example 4:

// Input: [1,3,5,6], 0
// Output: 0

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target);

int main()
{
    vector<int> test{1, 3, 5, 6};
    int target = 5;
    cout << searchInsert(test, 7);
    return 0;
}

int searchInsert(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

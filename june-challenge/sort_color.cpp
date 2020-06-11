// Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Note: You are not suppose to use the library's sort function for this problem.

// Example:

// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Follow up:

// A rather straight forward solution is a two-pass algorithm using counting sort.
// First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
// Could you come up with a one-pass algorithm using only constant space?

#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums);

int main()
{

    return 0;
}

void sortColors(vector<int> &nums)
{
    int redCount = 0;
    int whiteCount = 0;
    int blueCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            redCount++;
        else if (nums[i] == 1)
            whiteCount++;
        else
            blueCount++;
    }

    int i = 0;

    while (redCount > 0)
    {
        nums[i] = 0;
        redCount--;
        i++;
    }

    while (whiteCount > 0)
    {
        nums[i] = 1;
        whiteCount--;
        i++;
    }

    while (blueCount > 0)
    {
        nums[i] = 2;
        blueCount--;
        i++;
    }
}
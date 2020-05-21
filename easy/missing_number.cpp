// Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

// Example 1:

// Input: [3,0,1]
// Output: 2
// Example 2:

// Input: [9,6,4,2,3,5,7,0,1]
// Output: 8
// Note:
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &nums);

int getSummation(int n);

int main()
{   int arr[] = { 9,6,4,2,3,5,7,0,1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    vector<int> vect(arr, arr + n); 
    cout << missingNumber(vect);
    return 0;
}

int missingNumber(vector<int> &nums)
{   int size = nums.size();
    int sum = 0;
    int total = getSummation(size);
    for(int i = 0; i < size; i++) {
        sum += nums[i];
    }
    return total - sum;
}

int getSummation(int n){
    return n * (n + 1) / 2;
}
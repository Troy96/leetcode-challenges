// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> vect(arr, arr + n);

    int target = 9;

    map<int, int> sumMap;
    map<int, int>::iterator mapIt;

    for (int i = 0; i < vect.size(); i++)
    {
        if (sumMap.count(target - vect[i]) > 0)
        {
            mapIt = sumMap.find(target - vect[i]);
            cout << mapIt->second << "," << i ;
        }

        else
        {
            sumMap.insert(pair<int, int>(vect[i], i));
        }
    }
    return 0;
}

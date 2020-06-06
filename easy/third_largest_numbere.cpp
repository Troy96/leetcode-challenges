//

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int thirdMax(vector<int> &nums);

int main()
{
    vector<int> vect{5, 2, 2};

    int rs = thirdMax(vect);

    cout << rs;

    return 0;
}

int thirdMax(vector<int> &nums)
{
    set<int, greater<int>> setNums(nums.begin(), nums.end());
    if (setNums.size() <= 2)
        return *setNums.begin();
    return *next(begin(setNums), 2);
}

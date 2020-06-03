// There are 2N people a company is planning to interview. The cost of flying the i-th person to city A is costs[i][0], and the cost of flying the i-th person to city B is costs[i][1].

// Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.

// Example 1:

// Input: [[10,20],[30,200],[400,50],[30,20]]
// Output: 110
// Explanation:
// The first person goes to city A for a cost of 10.
// The second person goes to city A for a cost of 30.
// The third person goes to city B for a cost of 50.
// The fourth person goes to city B for a cost of 20.

// The total minimum cost is 10 + 30 + 50 + 20 = 110 to have half the people interviewing in each city.

// Note:

// 1 <= costs.length <= 100
// It is guaranteed that costs.length is even.
// 1 <= costs[i][0], costs[i][1] <= 1000

#include <iostream>
#include <vector>

using namespace std;

int twoCitySchedCost(vector<vector<int>> &costs);

int main()
{
    vector<vector<int>> peopleData{{10, 20}, {30, 200}, {400, 50}, {30, 20}};

    cout << twoCitySchedCost(peopleData);

    return 0;
}

int twoCitySchedCost(vector<vector<int>> &costs)
{
    int totalCost = 0;
    vector<int> repay;

    for (int i = 0; i < costs.size(); i++)
    { //Calculate cost for sending all people to city A.
        totalCost += costs[i][0];
    }

    for (int i = 0; i < costs.size(); i++)
    { //Calculate repay if ith person would have gone to city B
        repay.push_back(costs[i][1] - costs[i][0]);
    }

    sort(repay.begin(), repay.end()); 

    for (int i = 0; i < repay.size() / 2; i++)
    {
        totalCost += repay[i]; //Add the difference amounts to the total
    }

    return totalCost;
}
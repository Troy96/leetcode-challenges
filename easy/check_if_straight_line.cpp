// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

// Example 1:

// Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
// Output: true
// Example 2:

// Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
// Output: false

// Constraints:

// 2 <= coordinates.length <= 1000
// coordinates[i].length == 2
// -10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
// coordinates contains no duplicate point.
// Accepted
// 72,460
// Submissions
// 152,555

#include <iostream>
#include <vector>

using namespace std;

bool checkStraightLine(vector<vector<int>> &coordinates);

int main()
{
    vector<vector<int>> vect{{1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7}};
    cout << boolalpha << checkStraightLine(vect);
    return 1;
}

bool checkStraightLine(vector<vector<int>> &coordinates)
{
    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];

    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];

    int dx = x1 - x0;
    int dy = y1 - y0;

    for (int i = 2; i < coordinates.size(); i++)
    {
        int x = coordinates[i][0];
        int y = coordinates[i][1];

        if (dy * (x - x0) != dx * (y - y0))
            return false;
    }
    return true;
}

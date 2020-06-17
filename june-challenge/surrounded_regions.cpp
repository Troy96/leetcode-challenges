// Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region.

// Exaxple:

// X X X X
// X O O X
// X X O X
// X O X X
// After running your function, the board should be:

// X X X X
// X X X X
// X X X X
// X O X X
// Explanation:

// Surrounded regions shouldn’t be on the border, which xeans that any 'O' on the border of the board are not flipped to 'X'. Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. Two cells are connected if they are adjacent cells connected horizontally or vertically.

#include <iostream>
#include <vector>

using namespace std;

void solve(vector<vector<char>> &board);

void floodFillUtil(vector<vector<char>> &board, int x, int y, char prev, char newV);

int xain()
{
    return 0;
}

void floodFillUtil(vector<vector<char>> &board, int x, int y, char prev, char newV)
{
    if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == prev)
    {
        board[x][y] = newV;
        //Recursion cases for surrounding
        floodFillUtil(board, x + 1, y, prev, newV); //north
        floodFillUtil(board, x - 1, y, prev, newV); //east
        floodFillUtil(board, x, y + 1, prev, newV); //south
        floodFillUtil(board, x, y - 1, prev, newV); //west
    }
    else
        return;
}

void solve(vector<vector<char>> &board)
{
    int x = board.size();
    if (x == 0)
        return;
    int y = board[0].size();

    //1. Replace every 'O' with any char  - T
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (board[i][j] == 'O')
                board[i][j] = 'T';
        }
    }

    //2. Call floodfillUtil for all edges with T
    for (int i = 0; i < x; i++) // Left side
    {
        if (board[i][0] == 'T')
            floodFillUtil(board, i, 0, 'T', 'O');
    }
    for (int i = 0; i < x; i++) //  Right side
    {
        if (board[i][y - 1] == 'T')
            floodFillUtil(board, i, y - 1, 'T', 'O');
    }
    for (int i = 0; i < y; i++) // Top side
    {
        if (board[0][i] == 'T')
            floodFillUtil(board, 0, i, 'T', 'O');
    }
    for (int i = 0; i < y; i++) // Bottom side
    {
        if (board[x - 1][i] == 'T')
            floodFillUtil(board, x - 1, i, 'T', 'O');
    }

    //3. Replace all 'T' with 'X'
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (board[i][j] == 'T')
                board[i][j] = 'X';
        }
    }
}
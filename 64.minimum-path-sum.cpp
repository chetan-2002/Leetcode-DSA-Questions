/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int column = grid[0].size();
        int sum = 0;
        for (int i = 0; i < column; i++)
        {
            sum += grid[0][i];
            grid[0][i] = sum;
        }
        sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += grid[i][0];
            grid[i][0] = sum;
        }
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < column; j++)
            {
                grid[i][j] = min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
            }
        }
        return grid[row - 1][column - 1];
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=980 lang=cpp
 *
 * [980] Unique Paths III
 */

// @lc code=start
class Solution
{
public:
    int dfs(int i, int j, vector<vector<int>> &grid, int zeroes)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == -1)
        {
            return 0;
        }
        if (grid[i][j] == 2)
        {
            if (zeroes == -1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        grid[i][j] = -1;
        zeroes -= 1;
        int total_paths = dfs(i + 1, j, grid, zeroes) + dfs(i, j + 1, grid, zeroes) + dfs(i - 1, j, grid, zeroes) + dfs(i, j - 1, grid, zeroes);
        grid[i][j] = 0;
        zeroes += 1;
        return total_paths;
    }
    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int _i = 0;
        int _j = 0;
        int zeroes = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    _i = i;
                    _j = j;
                }
                if (grid[i][j] == 0)
                {
                    zeroes += 1;
                }
            }
        }
        return dfs(_i, _j, grid, zeroes);
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1463 lang=cpp
 *
 * [1463] Cherry Pickup II
 */

// @lc code=start
class Solution
{
public:
    int dp[71][71][71];
    int dy[3] = {-1, 0, 1};
    int solve(vector<vector<int>> &grid, int r, int c1, int c2)
    {
        if (r == grid.size())
        {
            return 0;
        }
        if (r < 0 || c1 < 0 || r >= grid.size() || c1 >= grid[0].size() || c2 >= grid[0].size())
        {
            return INT_MIN;
        }
        if (dp[r][c1][c2] != -1)
        {
            return dp[r][c1][c2];
        }
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int new_c1 = c1 + dy[i];
                int new_c2 = c2 + dy[j];
                ans = max(ans, solve(grid, r + 1, new_c1, new_c2));
            }
        }
        if (c1 == c2)
        {
            ans += grid[r][c1];
        }
        else
        {
            ans += grid[r][c1] + grid[r][c2];
        }
        return dp[r][c1][c2] = ans;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {
        memset(dp, -1, sizeof(dp));
        int row = grid.size();
        int column = grid[0].size();
        return solve(grid, 0, 0, column - 1);
    }
};
// @lc code=end

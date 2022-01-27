/*
 * @lc app=leetcode id=576 lang=cpp
 *
 * [576] Out of Boundary Paths
 */

// @lc code=start
class Solution
{
public:
    int dfs(int i, int j, int maxMove, int m, int n, vector<vector<vector<int>>> &dp, int mod)
    {
        if (i < 0 || j < 0 || i >= m || j >= n)
        {
            return 1;
        }
        if (maxMove == 0)
        {
            return 0;
        }
        if (dp[i][j][maxMove] != -1)
        {
            return dp[i][j][maxMove];
        }
        long long int up = dfs(i - 1, j, maxMove - 1, m, n, dp, mod) % mod;
        long long int down = dfs(i + 1, j, maxMove - 1, m, n, dp, mod) % mod;
        long long int right = dfs(i, j + 1, maxMove - 1, m, n, dp, mod) % mod;
        long long int left = dfs(i, j - 1, maxMove - 1, m, n, dp, mod) % mod;

        return dp[i][j][maxMove] = (up + down + right + left) % mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1,vector<int> (maxMove+1,-1)));
        return (dfs(startRow, startColumn, maxMove, m, n, dp, 1e9 + 7));
    }
};
// @lc code=end

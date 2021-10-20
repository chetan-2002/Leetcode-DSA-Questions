/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */

// @lc code=start
class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < dp.size(); i++)
        {
            dp[0][i] = matrix[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int prev_col = (j >= 1) ? matrix[i][j] + dp[i - 1][j - 1] : INT_MAX;

                int next_col = (j < n - 1) ? matrix[i][j] + dp[i - 1][j + 1] : INT_MAX;
                int same_col = matrix[i][j] + dp[i - 1][j];

                dp[i][j] = min(prev_col, min(same_col, next_col));
            }
        }
        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            res = min(res, dp[n - 1][i]);
        }

        return res;
    }
};
// @lc code=end

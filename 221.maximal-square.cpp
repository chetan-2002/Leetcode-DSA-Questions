/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int res = 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] - '0' == 1)
                {
                    if (i >= 1 && j >= 1)
                    {
                        dp[i][j] = 1 + min({dp[i - 1][j - 1] - '0', dp[i - 1][j] - '0', dp[i][j - 1] - '0'}) + '0';
                    }
                    else
                    {
                        dp[i][j] = 1;
                    }
                }
                else
                {
                    dp[i][j] = 0;
                }
                res = max(res, dp[i][j]);
            }
        }
        return res * res;
    }
};
// @lc code=end

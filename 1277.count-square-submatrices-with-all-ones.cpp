/*
 * @lc app=leetcode id=1277 lang=cpp
 *
 * [1277] Count Square Submatrices with All Ones
 */

// @lc code=start
class Solution
{
public:
    int countSquares(vector<vector<int>> &matrix)
    {
        int res = 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 1)
                {
                    if (i >= 1 && j >= 1)
                    {
                        dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
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

                res += dp[i][j];
            }
        }
        return res;
    }
};
// @lc code=end

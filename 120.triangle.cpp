/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int row = triangle.size();
        int column = row;
        vector<vector<int>> dp(row, vector<int>(column, 0));
        dp[0][0] = triangle[0][0];
        for (int i = 1; i < row; i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (j == 0)
                {
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                }
                else if (j == triangle[i].size() - 1)
                {
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
                }
            }
        }
        return *min_element(dp[row - 1].begin(), dp[row - 1].end());
    }
};
// @lc code=end

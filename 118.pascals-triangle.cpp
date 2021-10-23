/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int rowIndex) {
        vector<vector<int>> dp(rowIndex);
        dp[0].push_back(1);
        for (int i = 1; i < rowIndex; i++)
        {
            dp[i].push_back(1);
            for (int j = 1; j < i; j++)
            {

                dp[i].push_back(dp[i - 1][j - 1] + dp[i - 1][j]);
            }
            dp[i].push_back(1);
        }
        return dp;
    }
};
// @lc code=end


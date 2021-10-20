/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
        vector<vector<long long int>> dp(n + 1, vector<long long int>(amount + 1, 0));
        for (int i = 1; i <= amount; i++)
        {
            dp[0][i] = INT_MAX;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < amount + 1; j++)
            {
                if (coins[i - 1] <= j)
                {
                    dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][amount] == INT_MAX)
        {
            return -1;
        }
        return dp[n][amount];
    }
};
// @lc code=end

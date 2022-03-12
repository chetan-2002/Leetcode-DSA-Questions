/*
 * @lc app=leetcode id=1359 lang=cpp
 *
 * [1359] Count All Valid Pickup and Delivery Options
 */

// @lc code=start
class Solution
{
public:
    int countOrders(int n)
    {
        vector<long long int> dp(501);
        dp[1] = 1LL;
        dp[2] = 6LL;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = (dp[i - 1] * (2 * i - 1) * i) % 1000000007;
        }
        return dp[n];
    }
};
// @lc code=end

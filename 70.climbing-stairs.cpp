/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int solve(int idx, vector<int> &dp)
    {
        if (idx <= 1)
        {
            return dp[idx] = 1;
        }
        if (dp[idx] != -1)
        {
            return dp[idx];
        }
        return dp[idx] = solve(idx - 1, dp) + solve(idx - 2, dp);
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        solve(n, dp);
        return dp[n];
    }
};
// @lc code=end

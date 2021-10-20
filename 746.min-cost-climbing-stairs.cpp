/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int minCost(vector<int> &cost, int n, vector<int> &dp)
    {
        if (n < 0)
        {
            return 0;
        }
        if (n == 1 || n == 0)
        {
            return cost[n];
        }
        if (dp[n] != 0)
        {
            return dp[n];
        }
        int res = cost[n] + min(minCost(cost, n - 1, dp), minCost(cost, n - 2, dp));
        return dp[n] = res;
    }
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n, 0);
        return min(minCost(cost, n - 1, dp), minCost(cost, n - 2, dp));
    }
};
// @lc code=end

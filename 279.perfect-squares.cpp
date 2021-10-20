/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution
{
public:
    int dp[102][10002];
    int solve(vector<int> &nums, int n, int sum)
    {
        if (sum == 0)
        {
            return dp[n][sum] = 0;
        }
        else if (n <= 0)
        {
            return dp[n][sum] = 1e8;
        }
        else if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }
        else if (nums[n - 1] > sum)
        {
            return dp[n][sum] = solve(nums, n - 1, sum);
        }

        return dp[n][sum] = min(1 + solve(nums, n, sum - nums[n - 1]), solve(nums, n - 1, sum));
    }
    int numSquares(int n)
    {
        vector<int> nums;
        memset(dp, -1, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {

            if (i * i <= n)
            {

                nums.push_back(i * i);
            }
        }
        return solve(nums, nums.size(), n);
    }
};
// @lc code=end

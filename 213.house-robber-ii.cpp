/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution
{
public:
    int maxProf(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dp(n, -1);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
        {
            int taken = dp[i - 2] + nums[i];
            int notTaken = dp[i - 1];
            dp[i] = max(taken, notTaken);
        }
        return dp[n - 1];
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> copy(n - 1);
        for (int i = 0; i < n - 1; i++)
            copy[i] = nums[i + 1];
        int withoutFirst = maxProf(copy);
        nums.pop_back();
        int withFirst = maxProf(nums);
        return max(withoutFirst, withFirst);
    }
};
// @lc code=end

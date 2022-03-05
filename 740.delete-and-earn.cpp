/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution
{
public:
    int f(int i, vector<int> &nums, vector<int> &dp)
    {
        if (i >= nums.size())
        {
            return 0;
        }
        if (dp[i] != -1)
            return dp[i];
        int curr_val = nums[i];
        int curr_sum = nums[i];
        int index = i + 1;
        while (index < nums.size() && curr_val == nums[index])
        {
            curr_sum += nums[i];
            index++;
        }
        while (index < nums.size() && curr_val + 1 == nums[index])
        {
            index += 1;
        }
        return dp[i] = max(curr_sum + f(index, nums, dp), f(i + 1, nums, dp));
    }
    int deleteAndEarn(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), -1);
        return f(0, nums, dp);
    }
};
// @lc code=end

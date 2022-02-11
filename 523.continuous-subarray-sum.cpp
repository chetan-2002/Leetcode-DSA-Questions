/*
 * @lc app=leetcode id=523 lang=cpp
 *
 * [523] Continuous Subarray Sum
 */

// @lc code=start
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        if (nums.size() < 2)
        {
            return false;
        }
        int n = nums.size();
        int prefix_sum = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += nums[i];
            int rem = prefix_sum % k;
            if (rem == 0 & i > 0)
            {
                return true;
            }
            if (mp.find(rem) != mp.end())
            {
                if (i - mp[rem] > 1)
                {
                    return true;
                }
            }
            else
            {
                mp[rem] = i;
            }
        }
        return false;
    }
};
// @lc code=end

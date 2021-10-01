/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = -1;
            }
        }
        int pre_sum = 0;
        int res = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            pre_sum += nums[i];

            if (pre_sum == 0)
            {
                res = i + 1;
            }
            if (mp.find(pre_sum) == mp.end())
            {
                mp.insert({pre_sum, i});
            }
            if (mp.find(pre_sum) != mp.end())
            {
                res = max(res, i - mp[pre_sum]);
            }
        }
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution
{
public:
    int f(vector<int> &nums, int index, unordered_map<int, int> &mp)
    {
        if (index >= nums.size())
        {
            return 0;
        }
        if (mp.find(index) != mp.end())
            return mp[index];
        int not_rob_house = f(nums, index + 1, mp);
        int rob_house = nums[index] + f(nums, index + 2, mp);
        return mp[index] = max(not_rob_house, rob_house);
    }
    int rob(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        return f(nums, 0, mp);
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1748 lang=cpp
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                ans += it.first;
            }
        }
        return ans;
    }
};
// @lc code=end

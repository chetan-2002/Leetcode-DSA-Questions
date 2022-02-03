/*
 * @lc app=leetcode id=454 lang=cpp
 *
 * [454] 4Sum II
 */

// @lc code=start
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        map<int, int> mp;
        for (auto i : nums1)
        {
            for (auto j : nums2)
            {
                mp[i + j] += 1;
            }
        }
        int ans = 0;
        for (auto i : nums3)
        {
            for (auto j : nums4)
            {
                if (mp.count(-i - j))
                    ans += mp[-i - j];
            }
        }
        return ans;
    }
};
// @lc code=end

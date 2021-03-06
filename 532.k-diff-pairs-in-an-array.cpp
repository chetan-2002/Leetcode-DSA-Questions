/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> res;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(nums[i] - nums[j]) == k)
                    res.insert({nums[i], nums[j]});
            }
        }
        count = res.size();
        return count;
    }
};
// @lc code=end

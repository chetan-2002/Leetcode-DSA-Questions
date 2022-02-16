/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution
{
public:
    void helper(int index, vector<int> &nums, vector<int> &subset, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        helper(index + 1, nums, subset, ans);
        subset.pop_back();
        int i = index;
        while ((i + 1) < nums.size() && nums[index] == nums[i + 1])
        {
            i++;
        }
        helper(i + 1, nums, subset, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> subset;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        helper(0, nums, subset, ans);
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution
{

public:
    vector<vector<int>> ans;
    void f(int ind, vector<int> &nums, vector<int> &ds)
    {
        if (ind == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        f(ind + 1, nums, ds);
        ds.pop_back();

        f(ind + 1, nums, ds);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> ds;
        f(0, nums, ds);
        return ans;
    }
};
// @lc code=end

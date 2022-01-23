/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution
{
public:
    void createPermutations(int idx, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (idx == nums.size() - 1)
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> seen;
        for (int i = idx; i < nums.size(); i++)
        {
            if (seen.find(nums[i]) == seen.end())
            {
                swap(nums[i], nums[idx]);
                createPermutations(idx + 1, nums, ans);
                swap(nums[i], nums[idx]);
                seen.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        createPermutations(0, nums, ans);
        return ans;
    }
};
// @lc code=end

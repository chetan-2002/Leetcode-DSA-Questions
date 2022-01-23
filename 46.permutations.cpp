/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution
{
public:
    void createPermutation(vector<int>&nums, vector<int>&freq, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                freq[i] = 1;
                ds.push_back(nums[i]);
                createPermutation(nums, freq, ds, ans);
                freq[i] = 0;
                ds.pop_back();
                
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        int n = nums.size();
        vector<int>freq(n);
        for(int i=0;i<n;i++){
            freq[i] =0;
        }
        vector<int> ds;
        vector<vector<int>> ans;
        createPermutation(nums, freq, ds, ans);
        return ans;
    }
};
// @lc code=end

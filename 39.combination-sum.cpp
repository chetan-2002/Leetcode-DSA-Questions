/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution
{
public:
    void f(int ind, vector<int> &candidates, int target, vector<int> &temp, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        if (ind == candidates.size())
            return;
        if (target < 0)
            return;

        temp.push_back(candidates[ind]);
        f(ind, candidates, target - candidates[ind], temp, ans);
        temp.pop_back();

        f(ind + 1, candidates, target, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        f(0, candidates, target, temp, ans);
        return ans;
    }
};
// @lc code=end

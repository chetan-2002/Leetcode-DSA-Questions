/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
 */

// @lc code=start
class Solution
{
public:
    void f(int ind, int no_of_elements, int target, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
    {
        if (no_of_elements == 0 && target == 0)
        {
            ans.push_back(temp);
            return;
        }
        if (ind > 8 || target < 0 || no_of_elements < 0)
            return;
        temp.push_back(nums[ind]);
        f(ind + 1, no_of_elements - 1, target - nums[ind], nums, temp, ans);
        temp.pop_back();

        f(ind + 1, no_of_elements, target, nums, temp, ans);
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> nums;
        nums.clear();
        for (int i = 1; i <= 9; i++)
            nums.push_back(i);
        f(0, k, n, nums, temp, ans);
        return ans;
    }
};
// @lc code=end

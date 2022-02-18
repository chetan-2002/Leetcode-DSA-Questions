/*
 * @lc app=leetcode id=377 lang=cpp
 *
 * [377] Combination Sum IV
 */

// @lc code=start
class Solution
{
public:
    int f(int ind, vector<int> &nums, int target)
    {

        if (ind == 0)
        {
            if (target % nums[0] == 0)
                return 1;
            else
                return 0;
        }

        int not_take = f(ind - 1, nums, target);
        int take = 0;
        if (target >= nums[ind])
            take = f(ind, nums, target - nums[ind]);
        return take + not_take;
    }
    
    int combinationSum4(vector<int> &nums, int target)
    {
        int n = nums.size();
        return f(n-1, nums, target);
    }
};
// @lc code=end

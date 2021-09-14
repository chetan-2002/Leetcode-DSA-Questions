/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int product = 1;
        int zero_count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zero_count++;
            }
            else
            {
                product = product * nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                if (zero_count > 0)
                {
                    ans[i] = 0;
                }
                else
                {
                    ans[i] = product / nums[i];
                }
            }
            else
            {
                if (zero_count >= 2)
                {
                    ans[i] = 0;
                }
                else
                {
                    ans[i] = product;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

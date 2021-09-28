/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int l_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (l_sum == sum - nums[i])
            {
                return i;
            }
            l_sum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};
// @lc code=end

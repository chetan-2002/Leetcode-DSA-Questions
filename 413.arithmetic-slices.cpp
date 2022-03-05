/*
 * @lc app=leetcode id=413 lang=cpp
 *
 * [413] Arithmetic Slices
 */

// @lc code=start
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return 0;
        int prev = nums[1] - nums[0];
        int curr_length = 0;
        int ans = 0;
        for (int i = 2; i < n; i++)
        {
            int curr_diff = nums[i] - nums[i - 1];
            if (prev == curr_diff)
                curr_length += 1;
            else
            {
                prev = curr_diff;
                curr_length = 0;
            }
            ans += curr_length;
        }
        return ans;
    }
};
// @lc code=end

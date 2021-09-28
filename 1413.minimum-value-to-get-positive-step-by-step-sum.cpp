/*
 * @lc app=leetcode id=1413 lang=cpp
 *
 * [1413] Minimum Value to Get Positive Step by Step Sum
 */

// @lc code=start
class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        bool flag = false;
        int min_neg = INT_MAX;
        int min_pos = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                flag = true;
            }
            if (nums[i] < 0 && nums[i] < min_neg)
            {
                min_neg = nums[i];
            }
            if (nums[i] > 0 && nums[i] < min_pos)
            {
                min_pos = nums[i];
            }
        }
        if (flag)
        {
            return abs(min_neg) + 1;
        }
        else
        {
            return 1;
        }

        return -1;
    }
};
// @lc code=end

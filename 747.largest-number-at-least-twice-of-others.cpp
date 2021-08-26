/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maximum = INT_MIN;
        int index = -1;
        if (nums.size() == 1)
        {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maximum)
            {
                maximum = nums[i];
                index = i;
            }
        }
        int second_max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != maximum)
            {

                if (nums[i] > second_max)
                {
                    second_max = nums[i];
                }
            }
        }
        if (maximum == second_max)
        {
            return -1;
        }

        if (second_max == 0)
        {
            return index;
        }

        if (maximum / second_max >= 2)
        {
            return index;
        }
        else
        {
            return -1;
        }
    }
};
// @lc code=end

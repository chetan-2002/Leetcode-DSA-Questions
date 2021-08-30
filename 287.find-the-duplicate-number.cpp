/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] != i + 1)
            {
                int correct = nums[i] - 1;
                if (nums[i] != nums[correct])
                {
                    swap(nums[i], nums[correct]);
       
                }
                else
                {
                    return nums[i];
                }

            }
            else
            {
                i++;
            }
        }
        return  -1;
    }
};
// @lc code=end

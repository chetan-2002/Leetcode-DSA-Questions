/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
            
        }

        int res = 1;
        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] != nums[res - 1])
            {
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

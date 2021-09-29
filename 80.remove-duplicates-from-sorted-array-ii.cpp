/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return nums.size();
            /* code */
        }
        
        int res = 2;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[res - 2])
            {
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

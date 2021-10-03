/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> res(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 1)
            {
                res[high--] = nums[i];
                /* code */
            }
            else
            {
                res[low++] = nums[i];
            }
        }
        return res;
    }
};
// @lc code=end

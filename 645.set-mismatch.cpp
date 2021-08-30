/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i], nums[nums[i] - 1]);
                /* code */
            }

            else
            {
                i++;
            }
            /* code */
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums[i] - 1)
            {
                ans.push_back(nums[i]);
                ans.push_back(i + 1);
                /* code */
            }

            /* code */
        }
        return ans;
    }
};
// @lc code=end

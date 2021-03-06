/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> lis(nums.size());
        lis[0] = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            lis[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i] && lis[i] < lis[j] + 1)
                {

                    lis[i] = lis[j] + 1;
                }
            }
        }
        return *max_element(lis.begin() , lis.end());
    }
};
// @lc code=end

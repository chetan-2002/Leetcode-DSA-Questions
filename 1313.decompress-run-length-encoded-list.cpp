/*
 * @lc app=leetcode id=1313 lang=cpp
 *
 * [1313] Decompress Run-Length Encoded List
 */

// @lc code=start
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 1; i < nums.size(); i = i + 2)
        {
            int value = nums[i];
            int iteration = nums[i - 1];

            for (int j = 0; j < iteration; j++)
            {

                ans.push_back(value);
            }
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1685 lang=cpp
 *
 * [1685] Sum of Absolute Differences in a Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prefix_sum;
        vector<int> suffix_sum;
        vector<int> ans;
        for (auto i : nums)
        {
            prefix_sum.push_back(i);
            suffix_sum.push_back(i);
        }
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] += prefix_sum[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            suffix_sum[i] += suffix_sum[i + 1];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int leftsum = prefix_sum[i] - nums[i];
            int left_ans = abs(leftsum - nums[i] * i);

            int rightsum = suffix_sum[i] - nums[i];
            int right_ans = abs(rightsum - (n - i - 1) * nums[i]);

            ans.push_back(left_ans + right_ans);
        }

        return ans;
    }
};
// @lc code=end

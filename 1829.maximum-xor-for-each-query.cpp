/*
 * @lc app=leetcode id=1829 lang=cpp
 *
 * [1829] Maximum XOR for Each Query
 */

// @lc code=start
class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        vector<int> xor_vec;
        int xor_sum=0;
        for (auto num : nums)
        {
            xor_sum ^= num;
            xor_vec.push_back(xor_sum);
        }
        vector<int> ans;
        int k = (1 << maximumBit) - 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            int t = xor_vec[i] ^ k;
            ans.push_back(t);
        }
        return ans;
    }
};
// @lc code=end

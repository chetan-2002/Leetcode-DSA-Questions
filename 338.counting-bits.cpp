/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        v.push_back(0);
        int count;
        for (int i = 1; i <= n; i++)
        {

            count = __builtin_popcount(i);
            v.push_back(count);
        }
        return v;
    }
};
// @lc code=end

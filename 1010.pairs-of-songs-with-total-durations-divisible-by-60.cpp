/*
 * @lc app=leetcode id=1010 lang=cpp
 *
 * [1010] Pairs of Songs With Total Durations Divisible by 60
 */

// @lc code=start
class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        int count = 0;
        int mp[60] = {0};
        for (auto i : time)
        {
            if (i % 60 == 0)
            {
                count += mp[0];
            }
            else
            {
                count += mp[60 - i % 60];
            }
            mp[i % 60] += 1;
        }
        return count;
    }
};
// @lc code=end

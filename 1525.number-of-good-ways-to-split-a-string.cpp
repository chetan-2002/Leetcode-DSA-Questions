/*
 * @lc app=leetcode id=1525 lang=cpp
 *
 * [1525] Number of Good Ways to Split a String
 */

// @lc code=start
class Solution
{
public:
    int numSplits(string s)
    {
        unordered_map<char, int> mp1, mp2;
        int count = 0;
        for (auto &c : s)
            mp1[c] += 1;
        for (auto &c : s)
        {
            mp1[c] -= 1;
            if (mp1[c] == 0)
                mp1.erase(c);
            mp2[c] += 1;
            if (mp1.size() == mp2.size())
                count += 1;
        }
        return count;
    }
};
// @lc code=end

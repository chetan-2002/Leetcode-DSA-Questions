/*
 * @lc app=leetcode id=1638 lang=cpp
 *
 * [1638] Count Substrings That Differ by One Character
 */

// @lc code=start
class Solution
{
public:
    int countSubstrings(string s, string t)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < t.size(); j++)
            {
                int mismatch = 0;
                for (int k = 0; i + k < s.size() && j + k < t.size(); k++)
                {
                    if (s[i + k] != t[j + k])
                    {
                        mismatch++;
                    }
                    if (mismatch > 1)
                    {
                        break;
                    }
                    count += mismatch;
                }
            }
        }
        return count;
    }
};
// @lc code=end

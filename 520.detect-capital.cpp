/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        bool firstCaps = isupper(word[0]);
        bool allCaps = true;
        bool allSmall = true;
        for (int i = 1; i < word.size(); i++)
        {
            if (isupper(word[i]))
            {
                allSmall = false;
            }
            else
            {
                allCaps = false;
            }
        }
        return (firstCaps && allCaps) || allSmall;
    }
};
// @lc code=end

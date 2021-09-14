/*
 * @lc app=leetcode id=1816 lang=cpp
 *
 * [1816] Truncate Sentence
 */

// @lc code=start
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int count = 0;
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                count++;
            }

            if (count == k)
            {
                break;
            }
            ans += s[i];
        }
        return ans;
    }
};
// @lc code=end

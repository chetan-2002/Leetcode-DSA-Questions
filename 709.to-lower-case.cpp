/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution
{
public:
    string toLowerCase(string s)
    {
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char ch = tolower(s[i]);
                ans += ch;
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};
// @lc code=end

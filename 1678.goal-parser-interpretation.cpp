/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution
{
public:
    string interpret(string s)
    {
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'G')
            {
                ans += 'G';
            }
            if (s[i] == '(' && s[i + 1] == ')')
            {
                ans += "o";
            }
            if (s[i] == '(' && s[i + 1] == 'a')
            {
                ans += "al";
            }
        }
        return ans;
    }
};
// @lc code=end

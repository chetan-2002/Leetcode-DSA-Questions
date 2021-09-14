/*
 * @lc app=leetcode id=1221 lang=cpp
 *
 * [1221] Split a String in Balanced Strings
 */

// @lc code=start
class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r_counter = 0;
        int l_counter = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                r_counter++;
            }
            if (s[i] == 'L')
            {
                l_counter++;
            }
            if (r_counter == l_counter)
            {
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

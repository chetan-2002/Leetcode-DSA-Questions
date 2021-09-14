/*
 * @lc app=leetcode id=859 lang=cpp
 *
 * [859] Buddy Strings
 */

// @lc code=start
class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {

        if (s.length() != goal.length())
        {
            return false;
        }
        if (s == goal)
        {
            return true;
            /* code */
        }
        
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[i])
            {
                count++;
            }
        }
        if (count == 2)
        {
            return true;
            /* code */
        }
        return false;
    }
};
// @lc code=end

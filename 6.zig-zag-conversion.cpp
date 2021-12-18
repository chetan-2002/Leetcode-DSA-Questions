/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }
        string ans;
        vector<string> v(numRows + 1);
        int row = 0;
        int down = 1;
        for (int i = 0; i < s.size(); i++)
        {
            v[row].push_back(s[i]);
            if (row == 0)
            {
                down = 1;
            }
            if (row == numRows - 1)
            {
                down = -1;
            }
            row += down;
        }
        for (auto it : v)
        {
            ans += it;
        }
        return ans;
    }
};
// @lc code=end

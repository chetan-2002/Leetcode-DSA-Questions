/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        int n = columnTitle.size();
        for (int i = 0; i < n; i++)
        {
            ans = ans * 26 + (columnTitle[i] - 'A' + 1);
        }
        return ans;
    }
};
// @lc code=end

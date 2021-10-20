/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution
{
public:
    void util(int n, int open, int close, vector<string> &ans, string s)
    {
        if (open == n && close == n)
        {
            ans.push_back(s);
            return;
        }
        if (open < n)
        {
            util(n, open + 1, close, ans, s + "(");
        }
        if (close < open)
        {
            util(n, open, close + 1, ans, s + ")");
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        util(n, 0, 0, ans, "");
        return ans;
    }
};
// @lc code=end

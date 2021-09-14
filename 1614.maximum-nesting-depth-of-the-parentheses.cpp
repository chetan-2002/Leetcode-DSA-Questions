/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution
{
public:
    int maxDepth(string s)
    {
        stack<char> st;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
                count++;
                ans = max(ans, count);
            }
            if (s[i] == ')')
            {
                st.pop();
                count--;
            }
        }
        return ans;
    }
};
// @lc code=end

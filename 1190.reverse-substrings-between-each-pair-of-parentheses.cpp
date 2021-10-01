/*
 * @lc app=leetcode id=1190 lang=cpp
 *
 * [1190] Reverse Substrings Between Each Pair of Parentheses
 */

// @lc code=start
class Solution
{
public:
    string reverseParentheses(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            if (s[i] == ')')
            {
                int begin = st.top();
                int end = i;
                st.pop();
                reverse(s.begin() + begin + 1, s.begin() + i);
            }
        }
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};
// @lc code=end

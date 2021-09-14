/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> st;
        int ans = 0;
        for (auto it : s)
        {
            if (it == '(')
            {
                st.push('(');
            }
            else
            {
                if (st.empty())
                {
                    ans++;
                }
                else
                {
                    st.pop();
                }
            }
        }
        return st.size() + ans;
    }
};
// @lc code=end

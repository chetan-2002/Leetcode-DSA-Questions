/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution
{
public:
    string makeGood(string s)
    {
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (st.size() == 0)
            {
                st.push(s[i]);

                continue;
            }
            if (s[i] == st.top() - 32 || s[i] == st.top() + 32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans;
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

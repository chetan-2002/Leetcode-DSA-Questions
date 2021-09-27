/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution
{
public:
    string removeDuplicates(string s)
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

            if (s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }

            /* code */
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

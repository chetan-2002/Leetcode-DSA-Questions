/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        stack<pair<char, int>> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push({s[i], i});
            }
            else if (s[i] == ')')
            {
                if (st.size() == 0)
                {
                    st.push({s[i], i});
                }
                else if (st.top().first == ')')
                {
                    st.push({s[i], i});
                }
                else
                {
                    st.pop();
                }
            }
        }

        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (!st.empty() && i == st.top().second)
            {
                st.pop();
                continue;
            }
            ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

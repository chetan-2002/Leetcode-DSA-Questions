/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */

// @lc code=start
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> st;
        for (auto &c : num)
        {
            while (!st.empty() && k > 0 && st.top() > c)
            {
                k--;
                st.pop();
            }
            if (st.empty() && c == '0')
            {
                continue;
            }
            else
            {
                st.push(c);
            }
        }
        while (!st.empty() && k != 0)
        {
            st.pop();
            k--;
        }
        if (st.empty())
        {
            return "0";
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

/*
 * @lc app=leetcode id=316 lang=cpp
 *
 * [316] Remove Duplicate Letters
 */

// @lc code=start
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        stack<char> st;
        vector<int> last_index(26, 0);
        vector<bool> seen(26, false);
        for (int i = 0; i < s.size(); i++)
        {
            last_index[s[i] - 'a'] = i;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (seen[s[i] - 'a'])
                continue;
            while (!st.empty() && st.top() > s[i] && i < last_index[st.top() - 'a'])
            {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i] - 'a'] = true;
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

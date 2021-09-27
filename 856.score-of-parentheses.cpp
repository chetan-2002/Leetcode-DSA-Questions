/*
 * @lc app=leetcode id=856 lang=cpp
 *
 * [856] Score of Parentheses
 */

// @lc code=start
class Solution
{
public:
    int scoreOfParentheses(string s)
    {
        int curr = 0;
        stack<int> st;
        for (auto i : s)
        {
            if (i == '(')
            {
                st.push(curr);
                curr = 0;
            }
            else
            {
                curr += max(1, curr) + st.top();
                st.pop();
            }
        }
        return curr;
    }
};
// @lc code=end

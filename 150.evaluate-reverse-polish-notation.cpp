/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution
{
public:
    int evalRPN(vector<string> &s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/")
            {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                switch (s[i][0])
                {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                }
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        return st.top();
    }
};
// @lc code=end

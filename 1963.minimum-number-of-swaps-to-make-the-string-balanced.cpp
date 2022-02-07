/*
 * @lc app=leetcode id=1963 lang=cpp
 *
 * [1963] Minimum Number of Swaps to Make the String Balanced
 */

// @lc code=start
class Solution
{
public:
    int minSwaps(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                {
                    st.push(s[i]);
                }
                else if (st.top() == '[')
                {
                    st.pop();
                }
            }
        }
        return st.size()/2;
    }
};
// @lc code=end

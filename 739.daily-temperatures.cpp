/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> ans;
        ans.push_back(0);
        stack<int> st;
        st.push(temperatures.size() - 1);
        for (int i = temperatures.size() - 2; i >= 0; i--)
        {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
            {
                st.pop();
            }
            int ng = st.empty() ? 0 : (st.top() - i);
            ans.push_back(ng);
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

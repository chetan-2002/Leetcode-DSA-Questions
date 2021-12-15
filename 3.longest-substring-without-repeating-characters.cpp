/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0;
        int j = 0;
        int maxLength = 0;
        set<char> st;
        while (j < s.size())
        {
            if (st.count(s[j]) == 0)
            {
                st.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
                j++;
            }else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxLength;
    }
};
// @lc code=end

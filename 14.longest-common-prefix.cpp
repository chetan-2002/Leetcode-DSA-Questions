/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        string ans = "";
        if (n == 0)
        {
            return ans;
        }
        sort(begin(strs), end(strs));
        string s1 = strs[0];
        string s2 = strs[n - 1];
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
            {
                ans += s1[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1312 lang=cpp
 *
 * [1312] Minimum Insertion Steps to Make a String Palindrome
 */

// @lc code=start
class Solution
{
public:
    int lcs(string a, string b)
    {
        reverse(b.begin(), b.end());
        vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
        for (int i = 1; i < a.size() + 1; i++)
        {
            for (int j = 1; j < b.size() + 1; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[a.size()][b.size()];
    }
    int minInsertions(string s)
    {
        return s.size() - lcs(s, s);
    }
};
// @lc code=end

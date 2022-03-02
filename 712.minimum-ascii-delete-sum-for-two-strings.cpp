/*
 * @lc app=leetcode id=712 lang=cpp
 *
 * [712] Minimum ASCII Delete Sum for Two Strings
 */

// @lc code=start
class Solution
{
public:
    int get_ascaii_value(char ch)
    {
        return int(ch);
    }
    int longest_common_subsequence(string &word1, string &word2)
    {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = word1[i - 1] + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
    int minimumDeleteSum(string s1, string s2)
    {
        int a = 0;
        int b = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            a += get_ascaii_value(s1[i]);
        }
        for (int i = 0; i < s2.size(); i++)
        {
            b += get_ascaii_value(s2[i]);
        }
        int lcs = longest_common_subsequence(s1, s2);
        return abs(a - lcs) + abs(b - lcs);
    }
};
// @lc code=end

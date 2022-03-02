/*
 * @lc app=leetcode id=583 lang=cpp
 *
 * [583] Delete Operation for Two Strings
 */

// @lc code=start
class Solution
{
public:
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
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2)
    {

        int lcs = longest_common_subsequence(word1, word2);
        int n = word1.size();
        int m = word2.size();
        
        return abs(n - lcs) + abs(m - lcs);
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=132 lang=cpp
 *
 * [132] Palindrome Partitioning II
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string &s, int i, int j)
    {

        while (i <= j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    int solve(string &s, vector<vector<int>> &dp, int i, int j)
    {
        if (i >= j)
        {
            return dp[i][j] = 0;
        }
        if (dp[i][j] != -1)
        {

            return dp[i][j];
        }
        if (isPalindrome(s, i, j))
        {
            dp[i][j] = 0;
            return 0;
        }
        int ans = INT_MAX;
        for (int k = i; k < j; k++)
        {
            if (isPalindrome(s, i, k))
            {
                int temp_ans = 1 + solve(s, dp, k + 1, j);
                ans = min(ans, temp_ans);
            }
        }
        return dp[i][j] = ans;
    }
    int minCut(string s)
    {
        vector<vector<int>> dp(s.size() + 1, vector<int>(s.size() + 1, -1));
        return solve(s, dp, 0, s.size() - 1);
    }
};
// @lc code=end

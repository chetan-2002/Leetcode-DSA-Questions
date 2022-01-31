/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int res = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int ans = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                ans += accounts[i][j];
            }
            res = max(ans, res);
        }
        return res;
    }
};
// @lc code=end

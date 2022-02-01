/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> right_max(n);

        right_max[n - 1] = prices[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(prices[i], right_max[i + 1]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            right_max[i] -= prices[i];
            ans = max(ans, right_max[i]);
        }
        return ans;
    }
};
// @lc code=end

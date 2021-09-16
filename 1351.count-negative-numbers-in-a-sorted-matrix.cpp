/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans=0;
        for (const vector<int> &row : grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
    }
};
// @lc code=end

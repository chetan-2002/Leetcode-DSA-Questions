/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */

// @lc code=start
class Solution
{
public:

    int lcs(vector<vector<int>> &dp, vector<int> nums1, vector<int> nums2, int m, int n)
    {
        int res= 0;
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    res = max(dp[i][j] ,res);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return res;
    }
    int findLength(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        return lcs(dp, nums1, nums2, m, n);
    }
};
// @lc code=end

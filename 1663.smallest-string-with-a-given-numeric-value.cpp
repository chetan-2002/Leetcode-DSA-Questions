/*
 * @lc app=leetcode id=1663 lang=cpp
 *
 * [1663] Smallest String With A Given Numeric Value
 */

// @lc code=start
class Solution
{
public:
    string getSmallestString(int n, int k)
    {
        string ans;
        int temp = n;
        while (temp--)
        {
            ans.push_back('a');
        }
        k = k - n;
        n = n - 1;
        while (k > 0)
        {
            ans[n] += min(25, k);
            --n;
            k -= min(25, k);
        }
        return ans;
    }
};
// @lc code=end

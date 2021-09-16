/*
 * @lc app=leetcode id=1551 lang=cpp
 *
 * [1551] Minimum Operations to Make Array Equal
 */

// @lc code=start
class Solution
{
public:
    int minOperations(int n)
    {
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back((2 * i) + 1);
        }
        int ans = 0;
        if (n % 2 != 0)
        {
            int iteration = floor(n / 2);
            for (int i = 0; i < iteration; i++)
            {
                ans += a[iteration] - a[i];
            }
        }
        else
        {
            int iteration = n / 2;
            int middle = (a[n / 2] + a[(n / 2) - 1]) / 2;
            for (int i = 0; i < iteration; i++)
            {
                ans += middle - a[i];
            }
        }
        return ans;
    }
};
// @lc code=end

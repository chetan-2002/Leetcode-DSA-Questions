/*
 * @lc app=leetcode id=312 lang=cpp
 *
 * [312] Burst Balloons
 */

// @lc code=start
class Solution
{
public:
    int t[1001][1001];
    int MCM(vector<int> &nums, int i, int j)
    {
        if (i >= j)
        {
            return 0;
        }
        if (t[i][j] != -1)
        {
            return t[i][j];
        }
        int ans = INT_MIN;
        for (int k = i; k < j; k++)
        {
            int temp = nums[i - 1] * nums[k] * nums[j] + MCM(nums, i, k) + MCM(nums, k + 1, j);

            if (temp > ans)
            {
                ans = temp;
            }
        }
        return t[i][j] = ans;
    }
    int maxCoins(vector<int> &nums)
    {
        memset(t, -1, sizeof(t));
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();
        int ans = MCM(nums, 1, n - 1);
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int ans = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i] += arr[i - 1];
        }
        ans += arr[arr.size() - 1];
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 2; j < arr.size(); j += 2)
            {
                if (i == 0)
                {
                    ans += arr[j];
                }
                else
                {
                    ans += (arr[j] - arr[i - 1]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

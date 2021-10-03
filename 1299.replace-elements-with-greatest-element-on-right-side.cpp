/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        vector<int> ans;
        int temp;
        int mx = -1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            int temp = arr[i];
            ans.push_back(mx);
            mx = max(arr[i], mx);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

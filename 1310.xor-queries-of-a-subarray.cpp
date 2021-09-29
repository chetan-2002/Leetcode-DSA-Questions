/*
 * @lc app=leetcode id=1310 lang=cpp
 *
 * [1310] XOR Queries of a Subarray
 */

// @lc code=start
class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i] ^= arr[i - 1];
        }
        vector<int> ans;
        for (auto q : queries)
        {
            ans.push_back(arr[q[1]] ^ (q[0] ? arr[q[0] - 1] : 0));
        }
        return ans;
    }
};
// @lc code=end

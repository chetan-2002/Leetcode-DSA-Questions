/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        unordered_map<int, vector<vector<int>>> m;

        int min_diff = INT_MAX;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++)
        {
            int d = arr[i] - arr[i - 1];

            min_diff = min(d, min_diff);

            m[d].push_back({arr[i - 1], arr[i]});
        }

        return m[min_diff];
    }
};
// @lc code=end

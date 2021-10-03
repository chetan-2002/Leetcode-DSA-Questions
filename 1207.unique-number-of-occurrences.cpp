/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> count;
        for (auto it : arr)
        {
            count[it]++;
        }
        unordered_map<int, int> ans;
        for (auto it : count)
        {
            ans[it.second]++;
        }
        for (auto it : ans)
        {
            if (it.second != 1)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

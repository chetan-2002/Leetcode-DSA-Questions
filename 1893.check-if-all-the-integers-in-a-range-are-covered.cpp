/*
 * @lc app=leetcode id=1893 lang=cpp
 *
 * [1893] Check if All the Integers in a Range Are Covered
 */

// @lc code=start
class Solution
{
public:
    bool isCovered(vector<vector<int>> &ranges, int left, int right)
    {
        set<int> m;
        for (auto r : ranges)
        {
            for (int i = r[0]; i <= r[1]; i++)
            {
                m.insert(i);
            }
        }

        for (int i = left; i <= right; i++)
        {
            if (m.find(i) == m.end())
                return false;
        }

        return true;
    }
};
// @lc code=end

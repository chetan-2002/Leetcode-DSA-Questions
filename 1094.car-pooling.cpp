/*
 * @lc app=leetcode id=1094 lang=cpp
 *
 * [1094] Car Pooling
 */

// @lc code=start
class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        int in_car = 0;
        vector<int> prefix(1001, 0);
        for (int i = 0; i < trips.size(); i++)
        {
            prefix[trips[i][1]] += trips[i][0];
            prefix[trips[i][2]] -= trips[i][0];
        }
        for (int i = 0; i < prefix.size(); i++)
        {
            in_car += prefix[i];
            if (in_car > capacity)
                return false;
        }
        return true;
    }
};
// @lc code=end

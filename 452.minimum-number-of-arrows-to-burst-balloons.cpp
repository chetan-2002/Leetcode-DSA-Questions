/*
 * @lc app=leetcode id=452 lang=cpp
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start
class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end(), [](vector<int> &a, vector<int> &b)
             { return a[1] < b[1]; });
        int res = 1;
        int prev_end = points[0][1];
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] > prev_end)
            {
                res++;
                prev_end = points[i][1];
            }
        }
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1288 lang=cpp
 *
 * [1288] Remove Covered Intervals
 */

// @lc code=start
class Solution
{
public:
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b)
             {
            if(a[0] == b[0]) return b < a;
            return a < b; });
        
        int count = 1;
        vector<int> elements = intervals[0];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] >= elements[0] && intervals[i][1] <= elements[1])
            {
                continue;
            }
            else
            {
                count += 1;
                elements[0] = intervals[i][0];
                elements[1] = intervals[i][1];
            }
        }
        return count;
    }
};
// @lc code=end

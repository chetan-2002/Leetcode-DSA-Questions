/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        priority_queue<pair<int, int>> max_heap;
        for (int i = 0; i < points.size(); i++)
        {
            max_heap.push({points[i][0] * points[i][0] + points[i][1] * points[i][1], i});
            if (max_heap.size() > k)
            {
                max_heap.pop();
            }
        }
        vector<vector<int>> ans;
        while (!max_heap.empty())
        {
            ans.push_back(points[max_heap.top().second]);
            max_heap.pop();
        }
        return ans;
    }
};
// @lc code=end

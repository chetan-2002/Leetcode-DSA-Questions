/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int destination = 0;
        vector<int> path;
        vector<vector<int>> ans;
        queue<vector<int>> q;
        path.push_back(0);
        q.push(path);
        while (!q.empty())
        {
            path = q.front();
            q.pop();
            int val = path.back();
            if (val == graph.size() - 1)
            {
                ans.push_back(path);
            }
            for (auto &i : graph[val])
            {
                vector<int> v(path);
                v.push_back(i);
                q.push(v);
            }
        }
        return ans;
    }
};
// @lc code=end

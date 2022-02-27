/*
 * @lc app=leetcode id=847 lang=cpp
 *
 * [847] Shortest Path Visiting All Nodes
 */

// @lc code=start
class Solution
{
public:
    int shortestPathLength(vector<vector<int>> &graph)
    {
        int n = graph.size();
        if (n == 1)
        {
            return 0;
        }
        queue<pair<int, int>> q;
        int final_state = (1 << n) - 1;
        vector<vector<bool>> dp(n, vector<bool>(final_state + 1, false));
        int path = 0;
        for (int i = 0; i < n; i++)
        {
            q.push({i, 1 << i});
        }
        while (!q.empty())
        {
            int t = q.size();
            path += 1;
            while (t--)
            {
                auto temp = q.front();
                q.pop();
                int curr = temp.first;
                int bit_mask = temp.second;
                for (auto child : graph[curr])
                {
                    int next_bit_mask = bit_mask | (1 << child);
                    if (dp[child][next_bit_mask] == true)
                        continue;
                    else
                        dp[child][next_bit_mask] = true;
                    if (next_bit_mask == final_state)
                        return path;
                    q.push({child, next_bit_mask});
                }
            }
        }
        return -1;
    }
};
// @lc code=end

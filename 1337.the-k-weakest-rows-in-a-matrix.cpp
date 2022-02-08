/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < mat.size(); i++)
        {
            int curr_sum = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 0)
                {
                    break;
                }
                else
                {
                    curr_sum += 1;
                }
            }
            pq.push({curr_sum, i});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<int> ans;
        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            ans.push_back(top.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

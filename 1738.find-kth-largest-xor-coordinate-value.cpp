/*
 * @lc app=leetcode id=1738 lang=cpp
 *
 * [1738] Find Kth Largest XOR Coordinate Value
 */

// @lc code=start
class Solution
{
public:
    int kthLargestValue(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
        priority_queue<int, vector<int>, greater<int>> min_heap;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                prefix[i][j] = matrix[i - 1][j - 1] ^ prefix[i - 1][j] ^ prefix[i][j - 1] ^ prefix[i - 1][j - 1];
                min_heap.push(prefix[i][j]);
                if (min_heap.size() > k)
                {
                    min_heap.pop();
                }
            }
        }
        return min_heap.top();
    }
};
// @lc code=end

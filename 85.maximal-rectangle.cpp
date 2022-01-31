/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
class Solution
{
public:
    int largestRectangleArea(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> left;
        stack<pair<int, int>> s;
        for (int i = 0; i < n; i++)
        {
            if (s.size() == 0)
            {
                left.push_back(-1);
            }
            else if (s.size() > 0 && arr[i] > s.top().first)
            {
                left.push_back(s.top().second);
            }
            else if (s.size() > 0 && arr[i] <= s.top().first)
            {
                while (s.size() > 0 && arr[i] <= s.top().first)
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    left.push_back(-1);
                }
                else
                {
                    left.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }

        vector<int> right;
        while (!s.empty())
        {
            s.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                right.push_back(n);
            }
            else if (s.size() > 0 && arr[i] > s.top().first)
            {
                right.push_back(s.top().second);
            }
            else if (s.size() > 0 && arr[i] <= s.top().first)
            {
                while (s.size() > 0 && arr[i] <= s.top().first)
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    right.push_back(n);
                }
                else
                {
                    right.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }
        reverse(right.begin(), right.end());

        vector<int> w(n);
        for (int i = 0; i < n; i++)
        {
            w[i] = right[i] - left[i] - 1;
        }

        vector<int> area(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            area[i] = w[i] * arr[i];
            ans = max(ans, area[i]);
        }

        return ans;
    }
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> temp(m, 0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] - '0' == 0)
                {
                    temp[j] = 0;
                }
                if (matrix[i][j] - '0' == 1)
                {
                    temp[j] += 1;
                }
            }
            ans = max(ans, largestRectangleArea(temp));
        }
        return ans;
    }
};
// @lc code=end

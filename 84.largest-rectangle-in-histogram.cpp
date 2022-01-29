/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
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
};
// @lc code=end

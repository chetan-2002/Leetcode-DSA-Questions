/*
 * @lc app=leetcode id=849 lang=cpp
 *
 * [849] Maximize Distance to Closest Person
 */

// @lc code=start
class Solution
{
public:
    int maxDistToClosest(vector<int> &seats)
    {
        int n = seats.size();
        vector<int> left(n, INT_MAX);
        vector<int> right(n, INT_MAX);

        for (int i = 0; i < n; i++)
        {
            if (seats[i] == 0)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (seats[j] == 1)
                    {
                        left[i] = i - j;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (seats[i] == 0)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (seats[j] == 1)
                    {
                        right[i] = j - i;
                        break;
                    }
                }
            }
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (seats[i] != 1)
                ans = max(ans, min(left[i], right[i]));
        }

        return ans;
    }

}
;
// @lc code=end

/*
 * @lc app=leetcode id=1510 lang=cpp
 *
 * [1510] Stone Game IV
 */

// @lc code=start
class Solution
{
public:
    bool winnerSquareGame(int n)
    {
        vector<bool> v(n + 1, false);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j * j <= i; j++)
            {
                if (!v[i - j * j])
                {
                    v[i] = true;
                    break;
                }
            }
        }
        return v[n];
    }
};
// @lc code=end

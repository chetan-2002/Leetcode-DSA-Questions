/*
 * @lc app=leetcode id=1447 lang=cpp
 *
 * [1447] Simplified Fractions
 */

// @lc code=start
class Solution
{
public:
    vector<string> simplifiedFractions(int n)
    {
        vector<string> ans;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (gcd(i, j) == 1)
                {
                    string answer = to_string(i) + '/' + to_string(j);

                    ans.push_back(answer);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

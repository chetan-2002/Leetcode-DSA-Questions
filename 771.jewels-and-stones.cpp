/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int ans = 0;
        for (int i = 0; i < jewels.length(); i++)
        {
            char to_be_searched = jewels[i];
            for (int j = 0; j < stones.length(); j++)
            {
                if (stones[j] == to_be_searched)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1662 lang=cpp
 *
 * [1662] Check If Two String Arrays are Equivalent
 */

// @lc code=start
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        bool ans;
        string final_1;
        string final_2;
        for (int i = 0; i < word1.size(); i++)
        {
            final_1 += word1[i];
        }
        for (int i = 0; i < word2.size(); i++)
        {
            final_2 += word2[i];
        }
        if (final_1 == final_2)
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
        return ans;
    }
};
// @lc code=end

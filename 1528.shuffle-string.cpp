/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string ans;
        for (int i = 0; i < indices.size(); i++)
        {
            int index = indices[i];
            char to_be_added = s[index];
            ans += to_be_added;
        }
        return ans;
    }
};
// @lc code=end

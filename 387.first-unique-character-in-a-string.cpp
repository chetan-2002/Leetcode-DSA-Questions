/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, pair<int, int>> mp;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            mp[s[i]].first++;
            mp[s[i]].second = i;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]].first == 1)
            {
                return mp[s[i]].second;
            }
        }
        return -1;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        for (auto &i : s)
        {
            mp[i]++;
        }
        sort(s.begin(), s.end(), [&mp](char a, char b) -> bool
             {
                if (mp[a] == mp[b])
                 {
                     return a < b;
                     
                 }
                return mp[a] > mp[b]; });
        return s;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1461 lang=cpp
 *
 * [1461] Check If a String Contains All Binary Codes of Size K
 */

// @lc code=start
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        if (s.size() < k)
            return false;
        string temp;
        unordered_map<string, int> mp;
        for (int i = 0; i < k; i++)
        {
            temp += s[i];
        }
        mp[temp] += 1;
        for (int i = k; i < s.size(); i++)
        {
            string t = temp.substr(1, k - 1);
            t += s[i];
            mp[t] += 1;
            temp = t;
        }
        if (mp.size() == (1 << k))
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=87 lang=cpp
 *
 * [87] Scramble String
 */

// @lc code=start
class Solution
{
public:
    bool solve(string s1, string s2, unordered_map<string, bool> &mp)
    {
        // base condition
        if (s1.compare(s2) == 0)
        {
            return true;
        }
        int n = s1.size();
        if (n == 0)
        {
            return true;
        }
        string key = s1;
        key.push_back(' ');
        key.append(s2);
        if (mp.find(key) != mp.end())
        {
            return mp[key];
        }
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if ((solve(s1.substr(0, i), s2.substr(0, i), mp) && solve(s1.substr(i, n - i), s2.substr(i, n - i), mp)) || (solve(s1.substr(0, i), s2.substr(n - i, i), mp) && solve(s1.substr(i, n - i), s2.substr(0, n - i), mp)))
            {
                flag = true;
                break;
            }
        }
        mp[key] = flag;
        return flag;
    }
    bool isScramble(string s1, string s2)
    {
        if (s1.size() != s2.size())
        {
            return false;
        }
        unordered_map<string, bool> mp;
        return solve(s1, s2, mp);
    }
};
// @lc code=end

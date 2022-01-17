/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        int words = 0;
        for (int i = 0; s[i]; i++)
            if (s[i] == ' ')
                words++;
        words += 1;
        if (words != pattern.length())
            return false;
        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;
        vector<string>v;
        string s1 = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                s1 += s[i];
            }
            else
            {
                v.push_back(s1);
                s1 = "";
            }
        }
        v.push_back(s1);
        for (int i = 0; i < pattern.size(); i++)
        {
            if (mp.find(pattern[i]) == mp.end() && mp2.find(v[i]) == mp2.end())
            {
                mp[pattern[i]] = v[i];
                mp2[v[i]] = pattern[i];
            }
            else if (mp2.find(v[i]) != mp2.end() && mp.find(pattern[i]) != mp.end())
            {
                if (mp[pattern[i]] != v[i])
                    return false;
                if (mp2[v[i]] != pattern[i])
                    return false;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        int n = s1.size();
        int m = s2.size();
        if (n > m)
            return false;
        for (auto &c : s1)
            vec1[c - 'a'] += 1;

        for (int i = 0; i < n; i++)
        {
            vec2[s2[i] - 'a'] += 1;
        }
        if (vec1 == vec2)
            return true;
        for (int i = n; i < m; i++)
        {
            vec2[s2[i - n] - 'a'] -= 1;
            vec2[s2[i] - 'a'] += 1;
            if (vec1 == vec2)
                return true;
        }
        return false;
    }
};
// @lc code=end

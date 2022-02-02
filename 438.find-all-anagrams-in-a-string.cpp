/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int s_length = s.size();
        int p_length = p.size();

        if (p_length > s_length)
            return {};

        vector<int> frequency(26, 0);
        vector<int> curr(26, 0);
        for (int i = 0; i < p_length; i++)
        {
            frequency[p[i] - 'a'] += 1;
            curr[s[i] - 'a'] += 1;
        }
        vector<int> ans;
        if (frequency == curr)
            ans.push_back(0);
        for (int i = p_length; i < s_length; i++)
        {
            curr[s[i - p_length] - 'a'] -= 1;
            curr[s[i] - 'a'] += 1;
            if (frequency == curr)
                ans.push_back(i - p_length + 1);
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=763 lang=cpp
 *
 * [763] Partition Labels
 */

// @lc code=start
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = i;
        }
        vector<int> ans;

        int prev_index = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            maxi = max(maxi, mp[s[i]]);
            if (i == maxi)
            {
                ans.push_back(maxi - prev_index + 1);
                prev_index = maxi + 1;
            }
        }
        return ans;
    }
};
// @lc code=end

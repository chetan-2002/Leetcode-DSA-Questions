/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (auto &i : strs)
        {
            string temp = i;
            sort(i.begin(), i.end());
            mp[i].push_back(temp);
        }
        for (auto &i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
// @lc code=end

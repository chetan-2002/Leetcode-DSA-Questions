/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {

        vector<string> ans;

        if (s.size() <= 10)
            return ans;
        string temp;
        unordered_map<string, int> mp;
        for (int i = 0; i < 10; i++)
        {
            temp += s[i];
        }
        cout << temp << " ";
        mp[temp] += 1;
        for (int i = 10; i < s.size(); i++)
        {
            string t = temp.substr(1, 9);

            t += s[i];
            mp[t] += 1;
            temp = t;
        }

        for (auto &i : mp)
        {
            if (i.second > 1)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
// @lc code=end

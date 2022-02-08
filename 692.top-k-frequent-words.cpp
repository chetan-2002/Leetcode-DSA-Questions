/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
 */

// @lc code=start
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> mp;
        for (auto c : words)
            mp[c] += 1;
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            pq.push({it->second, it->first});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<string> ans;
        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            ans.push_back(top.second);
        }
        return ans;
    }
};
// @lc code=end

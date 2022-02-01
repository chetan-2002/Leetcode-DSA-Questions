/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] += 1;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        for (auto i : mp)
        {
            min_heap.push({i.second, i.first});
            if (min_heap.size() > k)
            {
                min_heap.pop();
            }
        }
        vector<int> ans;
        while (!min_heap.empty())
        {
            ans.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return ans;
    }
};
// @lc code=end

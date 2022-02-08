/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */

// @lc code=start
class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        priority_queue<int> max_heap;
        for (auto &c : arr)
            mp[c]++;
        for (auto &c : mp)
            max_heap.push(c.second);
        int res = 0;
        int removed = 0;
        while (removed < arr.size() / 2)
        {
            removed += max_heap.top();
            max_heap.pop();
            res++;
        }
        return res;
    }
};
// @lc code=end

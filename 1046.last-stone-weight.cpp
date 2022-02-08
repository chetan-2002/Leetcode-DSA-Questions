/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        if (stones.size() == 1)
        {
            return stones[0];
        }
        priority_queue<int> pq;
        for (auto &c : stones)
            pq.push(c);
        while (pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if (x == y)
            {
                continue;
            }
            else
            {
                pq.push(y - x);
            }
        }
        if (pq.size() == 0)
        {
            return 0;
        }
        return pq.top();
    }
};
// @lc code=end

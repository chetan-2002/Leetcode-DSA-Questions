/*
 * @lc app=leetcode id=1962 lang=cpp
 *
 * [1962] Remove Stones to Minimize the Total
 */

// @lc code=start
class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq;
        for (auto &c : piles)
            pq.push(c);
        while (k != 0)
        {
            int top = pq.top();
            pq.pop();
            if (top == 0)
            {
                break;
            }
            if (top & 1)
            {
                pq.push((top + 1) / 2);
            }
            else
            {
                pq.push(top / 2);
            }
            k--;
        }
        int ans = 0;
        while (!pq.empty())
        {
            int top_most = pq.top();
            pq.pop();
            ans += top_most;
        }
        return ans;
    }
};
// @lc code=end

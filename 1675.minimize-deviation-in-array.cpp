/*
 * @lc app=leetcode id=1675 lang=cpp
 *
 * [1675] Minimize Deviation in Array
 */

// @lc code=start
class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        priority_queue<int> pq;
        int mini = INT_MAX;
        for (auto &c : nums)
        {
            if (c & 1)
            {
                c = c * 2;
            }
            mini = min(mini, c);
            pq.push(c);
        }
        int ans = INT_MAX;
        while (pq.top() % 2 == 0)
        {
            int ele = pq.top();
            pq.pop();
            ans = min(ans, ele - mini);
            ele /= 2;
            mini = min(mini, ele);
            pq.push(ele);
        }
        ans = min(ans, pq.top() - mini);
        return ans;
    }
};
// @lc code=end

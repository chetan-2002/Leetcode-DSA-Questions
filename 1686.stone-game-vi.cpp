/*
 * @lc app=leetcode id=1686 lang=cpp
 *
 * [1686] Stone Game VI
 */

// @lc code=start
class Solution
{
public:
    int stoneGameVI(vector<int> &aliceValues, vector<int> &bobValues)
    {
        priority_queue<pair<int, pair<int, int>>> pq;
        for (int i = 0; i < aliceValues.size(); i++)
        {
            pq.push({aliceValues[i] + bobValues[i], {aliceValues[i], bobValues[i]}});
        }
        bool aliceTurn = true;
        int as = 0, bs = 0;
        while (!pq.empty())
        {
            if (aliceTurn)
            {
                as += pq.top().second.first;
                pq.pop();
                aliceTurn = false;
            }
            else
            {
                bs += pq.top().second.second;
                pq.pop();
                aliceTurn = true;
            }
        }
        if (as > bs)
        {
            return 1;
        }
        else if (bs > as)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
};
// @lc code=end

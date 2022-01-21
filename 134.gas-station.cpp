/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int totalGas = 0;
        int currGas = 0;
        int ans = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            currGas += gas[i] - cost[i];
            totalGas += gas[i] - cost[i];
            if (currGas < 0)
            {
                currGas = 0;
                ans = i + 1;
            }
        }
        return totalGas >= 0 ? ans : -1;
    }
};
// @lc code=end

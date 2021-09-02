/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution
{
public:
    double average(vector<int> &salary)
    {
        double ans = 0;
        sort(salary.begin(), salary.end());
        double sum = 0;
        for (int i = 1; i < salary.size() - 1; i++)
        {
            sum += salary[i];
            
        }
        ans = sum / (salary.size() - 2);
        return ans;
    }
};
// @lc code=end

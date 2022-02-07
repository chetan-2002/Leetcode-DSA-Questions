/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int n = students.size();
        int freq[2] = {0, 0};
        for (int i = 0; i < n; i++)
        {
            freq[students[i]] += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (!freq[sandwiches[i]])
            {
                break;
            }
            freq[sandwiches[i]] -= 1;
        }
        return freq[0] + freq[1];
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution
{
public:
    string get_str(int first, int last)
    {
        return first == last ? to_string(first) : to_string(first) + "->" + to_string(last);
    }
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;
        if (nums.size() == 0)
            return ans;
        int first = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] + 1 != nums[i])
            {
                ans.push_back(get_str(first, nums[i - 1]));
                first = nums[i];
            }
        }
        ans.push_back(get_str(first, nums[nums.size() - 1]));
        return ans;
    }
};
// @lc code=end

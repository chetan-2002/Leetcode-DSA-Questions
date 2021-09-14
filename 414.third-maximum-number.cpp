/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if (nums.size() < 3)
        {
            return nums[nums.size()-1];
            /* code */
        }
        return nums[nums.size()-3];
        
        
    }
};
// @lc code=end

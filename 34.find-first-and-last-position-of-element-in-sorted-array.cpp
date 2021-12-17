/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        int res = -1;
        vector<int> ans;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                high = mid - 1;
                res = mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        ans.push_back(res);
        low = 0;
        high = nums.size() - 1;
        mid = 0;
        res = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                low = mid + 1;
                res = mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        ans.push_back(res);
        return ans;
    }
};
// @lc code=end

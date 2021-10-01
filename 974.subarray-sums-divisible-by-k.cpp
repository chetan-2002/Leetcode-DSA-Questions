/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int count = 0;
        unordered_map<int, int> map;
        map[0]++;
        int curr_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            curr_sum += nums[i];
            int rem = curr_sum % k;
            if (rem < 0)
            {
                rem += k;
            }
            if (map.count(rem) > 0)
            {
                count += map[rem];
            }
            map[rem]++;
        }
        return count;
    }
};
// @lc code=end

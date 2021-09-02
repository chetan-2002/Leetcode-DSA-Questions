/*
 * @lc app=leetcode id=1460 lang=cpp
 *
 * [1460] Make Two Arrays Equal by Reversing Sub-arrays
 */

// @lc code=start
class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        bool ans = true;
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != target[i])
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

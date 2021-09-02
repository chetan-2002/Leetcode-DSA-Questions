/*
 * @lc app=leetcode id=1502 lang=cpp
 *
 * [1502] Can Make Arithmetic Progression From Sequence
 */

// @lc code=start
class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        bool ans = true;
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] - arr[i - 1] != d)
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution
{
public:
    bool canEatInTime(vector<int> &piles, int h, int k)
    {
        int hours = 0;
        for (auto pile : piles)
        {
            hours += pile / k;
            if (pile % k != 0)
            {
                hours += 1;
            }
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;
        int right = 1000000000;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (canEatInTime(piles, h, mid))
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};
// @lc code=end

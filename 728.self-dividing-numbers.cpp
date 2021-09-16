/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution
{
public:
    bool isSelfDividing(int n)
    {
        int temp = n;
        while (n > 0)
        {
            int last = n % 10;
            if (last == 0)
            {
                return false;
            }

            if (temp % last != 0)
            {
                return false;
            }
            n /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (isSelfDividing(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// @lc code=end

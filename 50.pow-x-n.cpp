/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        double number = x;
        long long int power = n;
        bool isNegative = (n < 0) ? true : false;
        if (isNegative)
        {
            power = (-1) * power;
        }
        double ans = 1;
        while (power)
        {
            if ((power & 1) > 0)
            {
                ans = ans * number;
            }
            number = number * number;
            power = power >> 1;
        }
        if (isNegative)
        {
            ans = 1 / ans;
        }
        return ans;
    }
};
// @lc code=end

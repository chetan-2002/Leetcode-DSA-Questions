/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution
{
public:
    bool is_power(int n)
    {
        long long m = n;
        if (m == 0)
        {
            return false;
            /* code */
        }
        if (m == 1)
        {
            return true;
            /* code */
        }
        return !(m & (m - 1));
    }
    bool isPowerOfTwo(int n)
    {
        return is_power(n);
    }
};
// @lc code=end

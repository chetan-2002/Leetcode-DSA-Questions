/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution
{
public:
    // int range(int a)
    // {
    //     if (a % 4 == 0)
    //     {
    //         return a;
    //     }
    //     if (a % 4 == 1)
    //     {
    //         return 1;
    //     }
    //     if (a % 4 == 2)
    //     {
    //         return a + 1;
    //     }
    //     if (a % 4 == 3)
    //     {
    //         return 0;
    //     }
    //     return -1;
    // }
    int rangeBitwiseAnd(int m, int n)
    {
        while (n > m)
        {
            n = n & (n - 1);
        }
        return n;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1780 lang=cpp
 *
 * [1780] Check if Number is a Sum of Powers of Three
 */

// @lc code=start
class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        int i = 0;
        while (true)
        {
            if (pow(3, i) <= n)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        int j = i - 1;
        while (n > 0 && j != -1)
        {
            n = n - pow(3, j);
            if (n < 0)
            {
                if (j > 0)
                {
                    n += pow(3, j);
                    j--;
                    continue;
                }
            }
            j--;
            if (n == 0)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

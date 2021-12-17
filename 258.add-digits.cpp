/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
    int addDigits(int num)
    {
        while (true)
        {
            if (num < 10)
            {
                return num;
            }
            num = sumOfDigits(num);
        }
        //     int addDigits(int num) {
        //     return 1 + (num - 1) % 9;
        // }
    }
};
// @lc code=end

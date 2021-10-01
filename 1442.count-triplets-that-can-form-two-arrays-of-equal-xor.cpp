/*
 * @lc app=leetcode id=1442 lang=cpp
 *
 * [1442] Count Triplets That Can Form Two Arrays of Equal XOR
 */

// @lc code=start
class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int count = 0;
        int x;
        for (int i = 0; i < arr.size(); i++)
        {
            x = arr[i];
            for (int j = i + 1; j < arr.size(); j++)
            {
                x ^= arr[j];
                if (x == 0)
                {
                    count += (j - i);
                }
            }
        }
        return count;
    }
};
// @lc code=end

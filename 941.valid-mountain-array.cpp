/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
        {
            return false;
        }
        int pointer = 1;
        while (pointer < arr.size())
        {
            if (arr[pointer] > arr[pointer - 1])
            {
                pointer++;
            }
            else
            {
                break;
            }
        }

        if (pointer == arr.size())
            return false;
        if (pointer == 1)
            return false;

        while (pointer < arr.size())
        {
            if (arr[pointer] < arr[pointer - 1])
            {
                pointer++;
            }
            else
                break;
        }
        if (pointer == arr.size())
            return true;
        else
            return false;
    }
};
// @lc code=end

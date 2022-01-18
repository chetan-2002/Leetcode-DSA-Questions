/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;
        if(flowerbed.size() ==1 && flowerbed[0] ==0){
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == 0)
                {
                    if (i + 1 < flowerbed.size() && flowerbed[i + 1] == 0)
                    {
                        count++;
                        flowerbed[i] = 1;
                    }
                }
                else if (i == flowerbed.size() - 1)
                {
                    if (i - 1 >= 0 && flowerbed[i - 1] == 0)
                    {
                        count++;
                        flowerbed[i] = 1;
                    }
                }
                else
                {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
                    {
                        count++;
                        flowerbed[i] = 1;
                    }
                }
            }
        }
    
        return count >= n;
    }
};
// @lc code=end

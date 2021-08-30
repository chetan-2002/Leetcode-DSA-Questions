/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution
{
public:
    
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            int correct = nums[i] - 1;
            if (nums[i] != nums[correct])
            {
                swap(nums[i], nums[correct]);
                
            }
            else
            {
                i++;
            }

           
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i  != nums[i]-1)
            {
                ans.push_back(i + 1);

            }

        }
        return ans;
    }
};
// @lc code=end

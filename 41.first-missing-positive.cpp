/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while (i< nums.size())
        {
            int correct=nums[i]-1;
            if (nums[i]>0 && nums[i] != nums[correct] && nums[i]<=nums.size())
            {
                swap(nums[i],nums[correct]);
            
            }
            else{
                i++;
            }
           
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i+1)
            {
                return i+1;
                
            }
         
        }
        return (nums.size()+1);
        
        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1=0;
        int x2=0;
        int n=nums.size();
        for(auto i:nums){
            x1^=i;
        }
        for(int i=0;i<=n;i++){
            x2^=i;
        }
        return (x1^x2);
    }
};
// @lc code=end


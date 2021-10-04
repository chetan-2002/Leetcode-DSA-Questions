/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int countSubsets(vector<int>&nums, int sum){
        int n= nums.size();
        int dp[n+1][sum+1];
        for(int j=0;j<sum+1;j++){
            dp[0][j] = 0;
        }
        for(int i=0;i<n +1 ;i++){
            dp[i][0] = 1;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j< sum+1 ;j++){
                if(nums[i-1]<= j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum =0;
        
        for(auto i : nums){
            sum += i;
        }
        int p =(sum + target)/2;
        
        if((sum +target)%2 !=0){
            return 0;
        }
        if(sum < target){
            return 0;
        }
    
        return countSubsets(nums, abs(p));
    }
};
// @lc code=end


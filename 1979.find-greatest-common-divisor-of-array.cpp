/*
 * @lc app=leetcode id=1979 lang=cpp
 *
 * [1979] Find Greatest Common Divisor of Array
 */

// @lc code=start
class Solution {
public:
    int gcd(int a,int b){
        while (a!=b)
        {
            if (a>b)
            {
                a=a-b;
                /* code */
            }else{
                b=b-a;
            }
            
            /* code */
        }
        return a;
        
    }
    int findGCD(vector<int>& nums) {
        int m=INT_MIN;
        int n=INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]>m)
            {
                m=nums[i];
                /* code */
            }
            if (nums[i]<n)
            {
                n=nums[i];
                /* code */
            }
            
            
            /* code */
        }
        return gcd(m,n);
        
        
    }
};
// @lc code=end


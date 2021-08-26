/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(n!=0){
            if(n&1){
                n-=1;
                
                count++;
            }else{
                n>>=1;
                count++;
            }
        }
        return count;
    }
};
// @lc code=end


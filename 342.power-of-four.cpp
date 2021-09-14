/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        if (n ==1)
        {
            return true;
            /* code */
        }
        return n%4==0 && isPowerOfFour(n/4);
        
    }
};
// @lc code=end


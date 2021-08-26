/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
class Solution {
public:
    int subtractProductAndSum(int n) {
        int c1=1;
        int c2=0;
        while(n>0){
            int last=n%10;
            c1*=last;
            c2+=last;
            n/=10;
        }
        int d=c1-c2;
        return d;
    }
};
// @lc code=end


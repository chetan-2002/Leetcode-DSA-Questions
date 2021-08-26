/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        int temp=x;
        while(x>0){
            int last=x%10;
            rev=rev*10 +last;
            x/=10;
        }
        if(rev==temp){
            return true;
        }else{
            return false;
        }
    }
};
// @lc code=end


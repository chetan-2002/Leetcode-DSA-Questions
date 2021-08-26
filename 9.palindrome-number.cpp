/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
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


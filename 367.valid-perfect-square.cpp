/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        int end=num;
        int ans=-1;
        while(start<=end){
            long long int mid=start +(end-start)/2;
            if(mid*mid == num){
                return true;
            }else if(mid*mid <num){
                start=mid+1;
                ans=mid;
            }else{
                end=mid-1;
            }
        }
        if(ans*ans == num){
            return true;
        }
        return false;
    }
};
// @lc code=end


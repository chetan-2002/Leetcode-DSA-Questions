/*
 * @lc app=leetcode id=1486 lang=cpp
 *
 * [1486] XOR Operation in an Array
 */

// @lc code=start
class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int xorsum=0;
        for(int i=0;i<n;i++){
            arr[i]=start+2*i;
            xorsum^=arr[i];
        }
        return xorsum;
    }
};
// @lc code=end


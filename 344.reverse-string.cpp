/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int str= 0;
        int end= s.size() -1;
        while(str<=end){
            swap(s[str],s[end]);
            str++;
            end--;
        }
       
    }
};
// @lc code=end


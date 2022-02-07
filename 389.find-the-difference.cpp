/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        s+='\0';
        char a=0;
        for(int i=0;i<t.length();i++){
            a^=s[i]^t[i];
        }
        return a;
    }
};
// @lc code=end


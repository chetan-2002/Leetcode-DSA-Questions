/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string a= s;
        reverse(s.begin(), s.end());
        
        string t =s;
        cout<<t<<endl;
        vector<vector<int>>dp(n+1 ,vector<int>(n +1, 0) );
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1] == t[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        string ans;
        for(int i=1;i<=s.size();i++){
            if(dp[a.size()][i] != dp[a.size()][i-1]){
                ans += a[i-1];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout<<dp[i][j];
            }
            cout<<endl;
        }
        return ans;
    }
};
// @lc code=end


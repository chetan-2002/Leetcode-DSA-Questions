/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            /* code */
        }
        int max=INT_MIN;
        int ans=-1;
        for(auto v:mp){
            if (v.second > max)
            {
                max=v.second;
                /* code */
                ans=v.first;
            }
            
            
        }
        return ans;
        
    }
};
// @lc code=end


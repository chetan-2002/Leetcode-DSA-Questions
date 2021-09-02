/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
 */

// @lc code=start
class Solution {
public:
    static bool sortbysec(pair<int,int>a,pair<int,int>b){
        if (a.second== b.second)
        {
            return a.first> b.first;
            /* code */
        }
        
        return b.second> a.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        vector<pair<int,int>>v;
        map<int,int>mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            /* code */
        }
        for( auto it: mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),sortbysec);
        for(auto  i: v){
            while(i.second --){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};
// @lc code=end


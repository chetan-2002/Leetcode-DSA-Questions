/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums2[j] < nums1[i])
            {
                j++;
            }
            else
            {
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        set<int> s(ans.begin(), ans.end());
        vector<int> final_ans(s.begin(), s.end());
        return final_ans;
    }
};
// @lc code=end

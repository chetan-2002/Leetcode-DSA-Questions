/*
 * @lc app=leetcode id=1111 lang=cpp
 *
 * [1111] Maximum Nesting Depth of Two Valid Parentheses Strings
 */

// @lc code=start
class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        int d = 0, cur = 0, n = seq.size();
        for (auto &c : seq)
            d = max(d, c == '(' ? ++cur : --cur);
        vector<int> res(n);
        for (int i = 0; i < n; ++i)
            if ((seq[i] == '(' ? cur++ : --cur) >= d / 2)
                res[i] = 1;
        return res;
    }
};
// @lc code=end

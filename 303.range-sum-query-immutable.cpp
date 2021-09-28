/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray
{
public:
    vector<int> vec;
    NumArray(vector<int> &nums)
    {
        vec.resize(nums.size());
        vec[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            vec[i] = vec[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        int sum = 0;
        if (left == 0)
        {
            return vec[right];
        }
        sum = vec[right] - vec[left - 1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

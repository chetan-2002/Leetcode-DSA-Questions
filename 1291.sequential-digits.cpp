/*
 * @lc app=leetcode id=1291 lang=cpp
 *
 * [1291] Sequential Digits
 */

// @lc code=start
class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        int l_digits = to_string(low).size();
        int h_digits = to_string(high).size();
        string digits = "123456789";
        vector<int> ans;
        for (int i = l_digits; i <= h_digits; i++)
        {
            for (int j = 0; j <= 9 - i; j++)
            {
                int temp = stoi(digits.substr(j, i));
                if (temp >= low && temp <= high)
                {
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

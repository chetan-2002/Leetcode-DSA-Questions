/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string t;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i]>='0' && s[i]<='9'))
            {
                t += s[i];
            }
        }
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        int low = 0;
        int high = t.size() - 1;
        while (low <= high)
        {
            if (t[low] != t[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
// @lc code=end

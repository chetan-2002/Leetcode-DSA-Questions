/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */

// @lc code=start
class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        queue<string> q;
        set<string> words, st;
        for (auto &c : wordList)
            words.insert(c);
        q.push(beginWord);
        st.insert(beginWord);
        int res = 0;
        while (!q.empty())
        {
            int n = q.size();
            res += 1;
            for (int i = 0; i < n; i++)
            {
                string s = q.front();
                q.pop();
                if (s == endWord)
                    return res;
                for (int i = 0; i < s.size(); i++)
                {
                    string temp = s;
                    for (char j = 'a'; j <= 'z'; j++)
                    {
                        temp[i] = j;
                        if (words.count(temp) && !st.count(temp))
                        {
                            q.push(temp);
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
// @lc code=end

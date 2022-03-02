/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        queue<int> q;
        unordered_set<int> s;
        q.push(0);
        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            s.insert(front);
            for (auto i : rooms[front])
            {
                if (s.find(i) == s.end())
                {
                    q.push(i);
                }
            }
        }
        return rooms.size() == s.size();
    }
};
// @lc code=end

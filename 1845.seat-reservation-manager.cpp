/*
 * @lc app=leetcode id=1845 lang=cpp
 *
 * [1845] Seat Reservation Manager
 */

// @lc code=start
class SeatManager
{
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    SeatManager(int n)
    {

        for (int i = 1; i <= n; i++)
        {
            min_heap.push(i);
        }
    }

    int reserve()
    {
        int top = min_heap.top();
        min_heap.pop();
        return top;
        
    }

    void unreserve(int seatNumber)
    {
        min_heap.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
// @lc code=end

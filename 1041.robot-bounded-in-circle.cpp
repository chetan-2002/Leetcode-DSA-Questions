/*
 * @lc app=leetcode id=1041 lang=cpp
 *
 * [1041] Robot Bounded In Circle
 */

// @lc code=start
class Solution
{
public:
    bool originVerifier(int x, int y)
    {
        if (x == 0 && y == 0)
            return true;
        return false;
    }
    bool isRobotBounded(string instructions)
    {

        int count = 0;
        char current_dir = 'N';
        // co-ordinate points
        int x = 0, y = 0;
        for (int i = 0; i < instructions.size(); i++)
        {
            if (instructions[i] == 'G')
            {
                y += current_dir == 'N' ? 1 : 0;
                y += current_dir == 'S' ? -1 : 0;
                x += current_dir == 'E' ? 1 : 0;
                x += current_dir == 'W' ? -1 : 0;
            }
             else{
                char incoming = instructions[i];
                if(current_dir == 'N'){
                    current_dir = incoming == 'L' ? 'W' : 'E';
                }
                else if(current_dir == 'W'){
                    current_dir = incoming == 'L' ? 'S' : 'N';
                }
                else if(current_dir == 'S'){
                    current_dir = incoming == 'L' ? 'E' : 'W';
                }
                else{
                    current_dir = incoming == 'L' ? 'N' : 'S';
                }
            }
        }
        if(current_dir!='N' || originVerifier(x,y))
            return true;
        return false;
    }    
    
};
// @lc code=end

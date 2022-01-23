/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution
{
public:
    bool checkSudoku(int row, int col, char c, vector<vector<char>> &board)
    {
        board[row][col] = '.';
        for (int i = 0; i < 9; i++)
        {

            if (board[row][i] == c)
            {
                return false;
            }
            if (board[i][col] == c)
            {
                return false;
            }
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
            {
                return false;
            }
        }
        board[row][col] = c;
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] != '.')
                {
                    if (!checkSudoku(i, j, board[i][j], board))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end

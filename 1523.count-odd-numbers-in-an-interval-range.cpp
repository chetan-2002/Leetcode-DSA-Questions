/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        if(high % 2 == 1 || low % 2 == 1){
			return (high - low) / 2 + 1; 
		}
		return (high - low) / 2;
    }
};
// @lc code=end


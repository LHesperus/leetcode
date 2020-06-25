/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        long tmp=1;
        while(tmp<=n)
        {
            if(tmp==n) return true;
            else
            {
                tmp=tmp*3;
            }
            
        }
        return false;
    }
};
// @lc code=end


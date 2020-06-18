/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int tmp=1,cnt=0;

        while(tmp!=1073741824)
        {
            tmp=tmp<<1;
            if((tmp&x)!=(tmp&y)) cnt++;
        }
        if((1&x)!=(1&y)) cnt++;
        return cnt;
    }
};
// @lc code=end


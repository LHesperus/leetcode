/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 * &1一定要用()，每次都在这个bug浪费时间
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=n&1;
        for(int i=0;i<31;i++)
            ans=(ans<<1)+((n>>(i+1))&1);         
        return ans;
    }

};
/*
Integer.reverse(n)

uint32_t reverseBits(uint32_t n) { 
    n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16); 
    n = ((n & 0xff00ff00) >>  8) | ((n & 0x00ff00ff) <<  8);  
    n = ((n & 0xf0f0f0f0) >>  4) | ((n & 0x0f0f0f0f) <<  4);  
    n = ((n & 0xcccccccc) >>  2) | ((n & 0x33333333) <<  2);  
    n = ((n & 0xaaaaaaaa) >>  1) | ((n & 0x55555555) <<  1);  
    return n;
}
*/
// @lc code=end


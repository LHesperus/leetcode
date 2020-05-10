/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int helper(int l,int r)
    {
        int m=(l-r)/2+r;//为了避免l+r>int范围，改写成这样
        int i=guess(m);
        if(i==-1)
        {
            return helper(l,m-1);
        }else if(i==1)
        {
            return helper(m+1,r);
        }else
        {
            return m;
        }
        
    }
    int guessNumber(int n) {
        return helper(1,n);
    }
};
// @lc code=end


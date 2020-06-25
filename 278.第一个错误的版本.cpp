/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int helper(int l,int r)
    {
        if(r-l<=1)
        {
            if(isBadVersion(l)) return l;
            else return r;
        } 
        if(isBadVersion((r-l)/2+l)) 
        {
            r=(r-l)/2+l;
            return helper(l,r);
        }else
        {
            l=(r-l)/2+l;
            return helper(l,r);
        }
        
    }
    int firstBadVersion(int n) {
        int l=1,r=n;
        return helper(l,n);
    }
};
// @lc code=end


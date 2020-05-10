/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int helper(int x,int l,int r)
    {
      //  cout<<l<<" "<<r<<endl;
        int m=(l+r)/2;
        if(m*m==x) return m;
        if(r-l==1) return l;
        if(m*m>x)
        {
            return helper(x,l,m);
        }else
        {
            return helper(x,m,r);
        }
        
    }
    int mySqrt(int x) {
       // return (int)sqrt(x);
        int l=0,r=46340;
        if(r*r<=x) return r;
        return helper(x,l,r);
    }
};
// @lc code=end


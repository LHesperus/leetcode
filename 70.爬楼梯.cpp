/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    //int cnt;
    /*void  helper(int n)
    {
        if(n==0) 
        {
            cnt++;
            return ;
        }
        if(n>=2) 
        {
            helper(n-1);
            helper(n-2);
        }else
        {
            helper(n-1);
        }
    }*/
    int climbStairs(int n) {
        /*cnt=0;
        helper(n);
        return cnt;*/
        int x1=0,x2=0,cnt=1;
        for(int i=0;i<n;i++)
        {
            x1=x2;
            x2=cnt;
            cnt=x1+x2;
        }  
        return cnt;
    }

};
// @lc code=end


/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数:看题解，比这个代码快
 */

// @lc code=start
class Solution {
public:
    bool helper(int &n)//true ->质数
    {
        if(n==2) return true;
        int bound=(int)sqrt(n)+1;
        for(int i=2;i<=bound;i++)
            if(n%i==0) return false;
        return true;
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        if(n<=3) return 1;
        vector<bool> vec(n,false);
        int cnt=0;
        for(int i=2;i<n;i++)
        {
            if(vec[i]) continue;//不是质数，跳过
            if(helper(i)) //是质数
            { 
                cnt++;
                int tmp=2*i;
                while(tmp<n)
                {
                    vec[tmp]=true;
                    tmp+=i;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end


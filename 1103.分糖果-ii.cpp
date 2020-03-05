/*
 * @lc app=leetcode.cn id=1103 lang=cpp
 *
 * [1103] 分糖果 II
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans;
        ans.resize(num_people);
        //计算n^2+n-2m=0的最大解
        int max_n=0;
        max_n=floor(-1+sqrt(1+8*(double)candies))/2;
        //糖果数不够分一轮
        if(candies-1<num_people)
        {
            for(int i=0;i<candies-1;i++)
                ans[i]=i+1;
            ans[max_n-1]=candies-(max_n-1)*max_n/2;

            return ans;
        }else
        {
            int Ntime=max_n/num_people;
            int M=max_n%num_people;
            for(int i=0;i<M;i++)
            {
                ans[i]=(i+1)*(Ntime+1)+num_people*(Ntime+1)*Ntime/2;
            }
            for(int i=M;i<num_people;i++)
            {
                ans[i]=(i+1)*(Ntime)+num_people*(Ntime-1)*Ntime/2;
            }
            ans[M]=candies-(max_n+1)*max_n/2+(M+1)*(Ntime)+num_people*(Ntime-1)*Ntime/2;
            return ans;
        }
    }
};
// @lc code=end


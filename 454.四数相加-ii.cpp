/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 * AB相加的结果存为一个map，value是结果的次数
 * CD也存为一个map，key和为0的两个value相乘
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> ABmap,CDmap;
        int len=A.size();
        int tmp=0;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                tmp=A[i]+B[j];
                if(!ABmap.count(tmp))
                {
                    ABmap.insert(make_pair(tmp,1));
                }else
                {
                    ABmap[tmp]++;
                }
                tmp=C[i]+D[j];
                if(!CDmap.count(tmp))
                {
                    CDmap.insert(make_pair(tmp,1));
                }else
                {
                    CDmap[tmp]++;
                }
            }
        }
        tmp=0;
        for(auto it=ABmap.begin();it!=ABmap.end();it++)
            if(CDmap.count(-it->first))
                tmp+=it->second*CDmap[-it->first];

        return tmp;
    }
};
// @lc code=end


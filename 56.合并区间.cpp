/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 * 先排序，然后对比每一组右边界r与下一组边界[l2,r2]
 * l2<r 则更新下一组边界
 * l2>r 则得到一组合并后的区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        if(intervals.size()==0) return ans;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<n-1;i++)
        {
            int l=intervals[i][0],r=intervals[i][1];
            if(r>=intervals[i+1][0]&&r<=intervals[i+1][1])
            {
                intervals[i+1][0]=l;
            }else if(r>=intervals[i+1][0]&&r>intervals[i+1][1])
            {
                intervals[i+1][0]=l;
                intervals[i+1][1]=r;
            }else if(r<intervals[i+1][0])
            {
                ans.push_back({l,r});
            }
        }
        ans.push_back({intervals[n-1][0],intervals[n-1][1]});
        return ans;
    }
};


// @lc code=end


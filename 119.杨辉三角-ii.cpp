/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> DFS(int row)
    {
        if(row==2)
            return {1,1};
        vector<int> ans0=DFS(row-1);
        for(int i=row-2;i>=1;i--)
        {
            ans0[i]=ans0[i]+ans0[i-1];
        }
        ans0.push_back(1);
        return ans0;
    }
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        return DFS(rowIndex+1);
    }
};
// @lc code=end


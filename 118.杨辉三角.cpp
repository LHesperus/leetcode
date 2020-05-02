/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.resize(numRows);
        if(!numRows) return ans;
        ans[0].resize(1);
        ans[0][0]=1;
        if(numRows==1) return ans;
        for(int i=1;i<numRows;i++)
        {
            ans[i].push_back(1); 
            for(int j=0;j<ans[i-1].size()-1;j++)
                ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);
            ans[i].push_back(1);
        }
        return ans;
    }
};
// @lc code=end


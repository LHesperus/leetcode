/*
 * @lc app=leetcode.cn id=498 lang=cpp
 *
 * [498] 对角线遍历
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(!matrix.size()) return ans;
        int c=matrix.size();
        int r=matrix[0].size();
        int i=0,j=0;
        ans.push_back(matrix[i][j]);
        bool flag=false;//control j ++ or --
        while(i!=c-1||j!=r-1)
        {
            if(!flag)//++
            {
                if(i==0&&j<r-1)
                {
                    j++;
                    flag=true;
                }else if(j==r-1)
                {
                    i++;
                    flag=true;
                }else
                {
                    i--;
                    j++;
                }
                
                ans.push_back(matrix[i][j]);
            }else
            {
                if(i==c-1)
                {
                    j++;
                    flag=false;
                }else if(j==0&&i<c-1)
                {
                    i++;
                    flag=false;
                }else
                {
                    i++;
                    j--;
                }
                ans.push_back(matrix[i][j]);
                
            }
            
        }
        return ans;
    }
};
// @lc code=end


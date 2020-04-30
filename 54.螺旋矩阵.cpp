/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(!matrix.size()) return ans;
        int c=matrix.size();
        int r=matrix[0].size();
        int i=0,j=0;
        int sizecr=c*r;
        int p=0;
        ans.resize(sizecr);
        int up=0,down=c-1,left=0,right=r-1;
        int flag=0;
        ans[p++]=matrix[i][j];
        while(p<=sizecr-1)
        {
            switch(flag)
            {
                case 0:
                    if(j!=right)
                    {
                        j++;
                    }else
                    {
                        i++;
                        up++;
                        flag=1;
                    }
                    ans[p++]=matrix[i][j];
                    break;
                case 1:
                    if(i!=down)
                    {
                        i++;
                    }else
                    {
                        j--;
                        right--;
                        flag=2;
                    }
                    ans[p++]=matrix[i][j];
                    break;
                case 2:
                    if(j!=left)
                    {
                        j--;
                    }else
                    {
                        i--;
                        down--;
                        flag=3;
                    }
                    ans[p++]=matrix[i][j];
                    break;
                case 3:
                    if(i!=up)
                    {
                        i--;
                    }else
                    {
                        j++;
                        left++;
                        flag=0;
                    }
                    ans[p++]=matrix[i][j];
                    break;
            }
        }
        return ans;
        
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> n1(9,false);
        vector<bool> n2(9,false);
        vector<bool> n3(9,false);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(n1[board[i][j]-'0'-1])
                        return false;
                    n1[board[i][j]-'0'-1]=true;
                }
                if(board[j][i]!='.')
                {
                    if(n2[board[j][i]-'0'-1])
                        return false;
                    n2[board[j][i]-'0'-1]=true;
                } 
                char b=board[i/3*3+j/3][i%3*3+j%3];
                if(b!='.')
                {
                    if(n3[b-'0'-1])
                        return false;
                    n3[b-'0'-1]=true;
                }            
            }
            for(int ii=0;ii<9;ii++)
                n1[ii]=n2[ii]=n3[ii]=false;
        }
        return true;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=200 lang=cpp
 * 思路：对每个为‘1’的点进行DFS，搜索其前后左右的所有点，顺便标记
 * 每次搜索结束，就能将一座岛屿标记完，此时cnt++，记录岛屿数。
 * [200] 岛屿数量
 */

// @lc code=start
//#include<vector>
//using namespace std;
class Solution {
public:
    void DFS(int i, int j)
    {
        char front = '0', back = '0', up = '0', down = '0';
        vis[i][j] = true;
        if (j > 0)
            front = gridtmp[i][j - 1];
        if (j < sizey-1)
            back = gridtmp[i][j + 1];
        if (i > 0)
            up = gridtmp[i - 1][j];
        if (i < sizex-1)
            down = gridtmp[i + 1][j];

        if (up == '1' && vis[i - 1][j] == false)
            DFS(i - 1, j);
        if (down == '1' && vis[i + 1][j] == false)
            DFS(i + 1, j);
        if (front == '1' && vis[i][j - 1] == false)
            DFS(i, j - 1);
        if (back == '1' && vis[i][j + 1] == false)
            DFS(i, j + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        sizex = grid.size();
        if (!sizex) return 0;
        sizey = grid[0].size();
        vis.resize(sizex);
        //gridtmp.resize(sizex);
        for (int i = 0; i < sizex; i++)
        {
            vis[i].resize(sizey);
        }
        gridtmp=grid;
        for (int i = 0; i < sizex; i++)
        {
            for (int j = 0; j < sizey; j++)
            {
                if (vis[i][j] == false && gridtmp[i][j] != '0')
                {
                    DFS(i, j);
                //    if(gridtmp[i][j]!='0')
                        cnt++;
                }
            }
        }
        
        return cnt;
    }
private:
    vector<vector<bool>> vis;
    vector<vector<char>> gridtmp;
    int sizex;
    int sizey;
};
// @lc code=end


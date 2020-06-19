/*
 * @lc app=leetcode.cn id=447 lang=cpp
 *
 * [447] 回旋镖的数量
 * 写的比较慢，两层for，第二层参考第一题：两数之和
 */

// @lc code=start
class Solution {
public:
    int dis_pow2(int p1,int p2,vector<vector<int>> &vec)
    {
        return pow(vec[p1][0]-vec[p2][0],2)+pow(vec[p1][1]-vec[p2][1],2);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {  
        int len=points.size();
        if(len<3) return 0;
       //  sort(points.begin(),points.end());
        int ans=0;
        for(int i=0;i<len;i++)
        {
            unordered_map<int,int> map1;
           // unordered_set<int> set1;
            for(int j=0;j<len;j++)
            {
                if(i==j) continue;
                int dis2=dis_pow2(i,j,points);
                if(map1.count(dis2)) 
                {
                    ans+=2*map1[dis2];
                    map1[dis2]++; 
                }
                else map1.insert(make_pair(dis2,1));
            }
        }
        return ans;
    }
    
};
// @lc code=end


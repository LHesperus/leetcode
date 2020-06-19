/*
 * @lc app=leetcode.cn id=149 lang=cpp
 *
 * [149] 直线上最多的点数
 * 两层for,检测第二层与第一层的斜率，精度需要用long double
 */

// @lc code=start
class Solution {
public:
    long double helper(int i,int j,vector<vector<int>>& points)//求斜率
    {
        if(points[i][0]==points[j][0]) return 1e9;
        else return (long double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
    }
    int maxPoints(vector<vector<int>>& points) {
        
        int len= points.size();
        if(len<3) return len;
        int max_n=2;
        for(int i=0;i<len-1;i++)
        {
            int max_n2=1;
            unordered_map<long double,int> map1;
            long double slope;
            int equal_i=0;
            for(int j=i+1;j<len;j++)
            {
                if(points[i]==points[j])
                {
                    equal_i++;
                   // cout<<i<<j<<"aa"<<endl;
                    continue;
                }
                slope=helper(i,j,points);
               // cout<<slope<<"s"<<endl;
                if(map1.count(slope))
                {
                    map1[slope]++;
                    if(max_n2< map1[slope]) max_n2=map1[slope];
                }else
                {
                    map1.insert(make_pair(slope,2));
                    if(max_n2< 2) max_n2=2;
                    
                } 
            }
            cout<<max_n2<<equal_i<<endl;
            max_n2+=equal_i;
            
            if(max_n<max_n2) max_n=max_n2;
        }
        
        return max_n;

    }
};
// @lc code=end


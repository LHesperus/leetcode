/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 * 解体思路：
 * 1.找到最高的柱子
 * 2.从左至右，利用stack，
 * 把小于局部最高点的存水量记录。不断更新局部最高点，统计左边总接水量。
 * 3.从右至左再操作一遍。
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3)
        {
            return 0;
        }
        //找到最高点
        int result=0;
        vector<int>::iterator it=max_element(height.begin(),height.end());
        int tmp=distance(height.begin(),it);
        stack <int> stk;
        int max_tmp=height[0];
        for(int i=1;i<=tmp;i++)
        {          
            if(height[i]>=max_tmp)
            {
                //局部最高点更新，记录存储雨水，清空stk
                max_tmp=height[i];
                while(!stk.empty()){result+=stk.top();stk.pop();}
            }
            else
            {
                //存储雨水
                stk.push(max_tmp-height[i]);
            }
        }
        max_tmp=height[height.size()-1];
        for(int i=height.size()-2;i>=tmp;i--)
        {          
            if(height[i]>=max_tmp)
            {
                //局部最高点更新，记录存储雨水，清空stk
                max_tmp=height[i];
                while(!stk.empty()){result+=stk.top();stk.pop();}
            }
            else
            {
                //存储雨水
                stk.push(max_tmp-height[i]);
            }
        }
        return result;
    }
};
// @lc code=end


#include<bits/stdc++.h>
using namespace std;
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

int main()
{
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    //vector<int> arr={2,0,2};
    Solution sln1;
    cout<<sln1.trap(arr)<<endl;
}
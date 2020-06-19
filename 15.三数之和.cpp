/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 * 第一层遍历，第二层首尾双指针
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        int p1=0,p2=2,p3=nums.size()-1;
        for(;p1<nums.size()-2;++p1)
        {
            p2=p1+1;
            p3=nums.size()-1;
            if(p1>0&&nums[p1]==nums[p1-1]) continue;
            
          //  cout<<p1<<"->"<<p2<<"->"<<p3<<endl;
            int target=-nums[p1];
            if(nums[p3]+nums[p3-1]<target) continue;
            while(p2<p3)
            {
              //  cout<<p1<<"->"<<p2<<"->"<<p3<<endl;
                if(nums[p2]+nums[p3]<target) 
                {
                    p2++;
                    if(nums[p2]==nums[p2-1]) continue; 
                 //   cout<<"aa"<<endl;           
                }
                else if(nums[p2]+nums[p3]>target)
                {
                    p3--;
                    if(nums[p3]==nums[p3+1]) continue;  
                //    cout<<"bb"<<endl;
                } 
                else 
                {
                    ans.push_back(vector<int>{nums[p1],nums[p2],nums[p3]});
                    p2++;
                    while(nums[p2]==nums[p2-1]&&p2<p3)
                        p2++;
                //    cout<<"cc"<<endl;
                }
            }
        }
        return ans;
    }
};
// @lc code=end


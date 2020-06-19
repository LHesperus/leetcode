/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int size=nums.size();
        if(size<4) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            int t1=target-nums[i];  
           // if(t1<3*nums[i+1]) break;   
            if(t1<nums[i+1]+nums[i+2]+nums[i+3]) break;  
            else if(t1>nums[size-1]+nums[size-2]+nums[size-3]) continue;
            for(int ii=i+1;ii<size-2;ii++)
            {
                if(ii>i+1&&nums[ii]==nums[ii-1]) continue;
                int t2=t1-nums[ii];  
                //if(t2<2*nums[ii+1]) break;  
                if(t2<nums[ii+1]+nums[ii+2]) break;   
                else if(t2>nums[size-1]+nums[size-2])   continue;            
                for(int iii=ii+1;iii<size-1;iii++)
                {
                    if(iii>ii+1&&nums[iii]==nums[iii-1]) continue;
                    int t3=t2-nums[iii];
                    if(t3<nums[iii+1]) break; 
                    else if(t3>nums[size-1]) continue;   
                    for(int iiii=iii+1;iiii<size;iiii++)
                    {
                        if(iiii>iii+1&&nums[iiii]==nums[iiii-1]) continue;
                        if(nums[iiii]<t3) continue;
                        else if(nums[iiii]>t3) break;
                        else
                        {
                            ans.push_back({nums[i],nums[ii],nums[iii],nums[iiii]});
                            break;
                        } 
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end


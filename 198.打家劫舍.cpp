/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 * 比最大子序和复杂一点点，需要考虑连续4个数，每个数更新为以当前数为末尾可以得到的最大和。
 * 不需要考虑4位以上是因为4位中的第二位一定比5位中第一位数大
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return nums[0]>nums[1]?nums[0]:nums[1]; 
        nums[2]+=nums[0];
        if(nums.size()==3) return nums[2]>nums[1]?nums[2]:nums[1];
        int ans=nums[2];
        for(int i=3;i<nums.size();i++)
        {
            nums[i]+=(nums[i-2]>nums[i-3]?nums[i-2]:nums[i-3]);
            if(nums[i]>ans) ans=nums[i];
        }
        return ans;
        
    }
};
// @lc code=end


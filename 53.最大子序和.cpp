/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 * 记录每个位置作为数组末尾能够得到最大的和，
 * 如果上一个值<0，则不修改数组
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>0) nums[i]+=nums[i-1];
            if(nums[i]>ans) ans=nums[i];
        }
        return ans;


    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0) return 0; 
        if(nums.size()==1) return nums[0]<target?1:0;
        if(nums[0]>target) return 0;
        for(int i=0;i<nums.size()-1;i++)
            if(target==nums[i]) return i;
            else if(target<nums[i+1]&&target>nums[i]) return i+1; 
        
        return nums[nums.size()-1]==target?nums.size()-1:nums.size();
    }
};
// @lc code=end


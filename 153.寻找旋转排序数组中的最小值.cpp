/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums[l]<nums[r]) return nums[l];
        while(l<r-1)
        {
            int mid=(r-l)/2+l;
            if(nums[mid]>nums[l]) l=mid;
            else r=mid;
        }
        return nums[r];
    }
};
// @lc code=end


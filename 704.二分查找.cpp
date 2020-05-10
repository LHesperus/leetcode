/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int m=(l+r)/2;
        while(r-l>1)
        {
            if(nums[m]<target)
            {
                l=m;
                m=(l+r)/2;
            }else if(nums[m]>target)
            {
                r=m;
                m=(l+r)/2;
            }else
            {
                return m;
            }
        }
        if(nums[l]==target) return l;
        if(nums[r]==target) return r;
        return -1;
    }
};
// @lc code=end


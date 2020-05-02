/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(!len) return 0;
        if(len==1) return 1;
        int j=0;
        for(int i=1;i<len;i++)
        {
            if(nums[i]!=nums[j])
                nums[++j]=nums[i];
        }
        return j+1;
    }
};
// @lc code=end


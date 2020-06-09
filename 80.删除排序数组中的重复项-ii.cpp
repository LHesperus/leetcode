/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3) return nums.size();
        int j=0;
        bool flag=false;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[j]&&flag==false)
            {
                nums[++j]=nums[i];
                flag=true;
            }else if(nums[i]!=nums[j]&&flag==true)
            {
                nums[++j]=nums[i];
                flag=false;
            }else if(nums[i]!=nums[j]&&flag==false)
            {
                nums[++j]=nums[i];
            }

        }
        return j+1;
    }
};
// @lc code=end


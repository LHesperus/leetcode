/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(!nums[i])
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                        swap(nums[j-1],nums[j]);
                    else
                        break;
                }
            }
        }
    }
};
// @lc code=end


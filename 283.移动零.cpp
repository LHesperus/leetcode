/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                ans.emplace_back(nums[i]);
        }
        for(int i=ans.size();i<nums.size();i++)
        {
            ans.emplace_back(0);
        }
        swap(ans,nums);
    }
};
// @lc code=end


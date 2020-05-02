/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int ans=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=val)
            {
                nums[ans++]=nums[i];
            }
        }
        return ans;
    }
};
// @lc code=end


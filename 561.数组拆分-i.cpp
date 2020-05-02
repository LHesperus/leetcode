/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 * 将大小相近的分为一组
 */

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()/2;i++)
        {
            ans+=nums[2*i];
        }
        return ans;
    }
};
// @lc code=end


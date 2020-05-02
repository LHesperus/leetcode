/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        k=k%len;
        for(int i=0;i<len-k;i++)
            nums.push_back(nums[i]);
        nums.erase(nums.begin(),nums.begin()+len-k);
    }
};
// @lc code=end


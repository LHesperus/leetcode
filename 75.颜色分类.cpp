/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0=0,p2=nums.size()-1,pcurr=0;
        while(pcurr<=p2)
        {
            if(nums[pcurr]==0)
            {
                swap(nums[pcurr],nums[p0]);
                p0++;
                pcurr++;
            }else if(nums[pcurr]==2)
            {
                swap(nums[pcurr],nums[p2]);
                p2--;
            }else if(nums[pcurr]==1)
            {
                pcurr++;
            }
        }
    }
};
// @lc code=end


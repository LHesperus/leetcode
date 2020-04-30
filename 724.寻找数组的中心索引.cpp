/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心索引
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(!nums.size()) return -1;
        if(nums.size()==1) return 0;
        int len=nums.size();
        int sum1=0;
        int sum2=0;
        for(int i=1;i<len;i++)
            sum2+=nums[i];
        for(int i=0;i<len-1;i++)
        {
            if(sum1==sum2)
            {
                return i;
            }else
            {
                sum1+=nums[i];
                sum2-=nums[i+1];
            }
        }
        if(sum1==sum2)
            return len-1;
        else
            return -1;
    }
};
// @lc code=end


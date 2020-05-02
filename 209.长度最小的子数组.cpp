/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len=nums.size();
        if(!len||(len==1&&nums[0]<s)) return 0;
        if(nums[0]>=s) return 1;
        int i=0,j=1;
        int sum=nums[0];
        while(j<len)
        {
            if(sum>=s)
                break;
            sum+=nums[j++];
        }
        j--;
        if(sum<s)
            return 0;
        if(i==0&&j==len-1&&sum-nums[0]<s)
            return j-i+1;
        while((j!=len-1)||i==0||(sum-nums[i-1]>=s))
        {
            sum-=nums[i++];
            if(j<len-1)
                sum+=nums[++j];
            while(sum-nums[j]>=s)
                sum-=nums[j--];
            
        }
        return j-i+1;
    }
};
// @lc code=end


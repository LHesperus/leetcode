/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,anstmp=0;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(nums[i]==1)
            {
                anstmp++;
            }else if(nums[i]!=1)
            {
                if(anstmp>ans)
                    ans=anstmp;
                anstmp=0;
            }
        }
        if(anstmp>ans)
            ans=anstmp;
        return ans;
    }
};
// @lc code=end

